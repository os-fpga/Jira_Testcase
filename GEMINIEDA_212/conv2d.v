// conv2d layer, axi-s in/out
//

module conv2d #(
    	parameter ICHAN=1, 	// number of input channels
    	parameter IWIDTH=28,	// width of row buffer
    	parameter OCHAN=32,	// number of output channels
    	parameter KHEIGHT=3,	// kernel height
    	parameter KWIDTH=3,	// kernel width
    	parameter STRIDE=1,	// stride
	parameter ODECIMAL=5,	// number of integer decimal places
	parameter WEIGHTS="mnist_00.mem")
(
	input wire clk,
	input wire reset,
	input wire signed [17:0] tdata_i,
	input wire tvalid_i,
	input wire tlast_i,
	output reg signed [17:0] tdata_o,
	output reg tvalid_o,
	output reg tlast_o
);

// conv2d row buffer BRAM, 1W1R
reg signed [17:0] rowbuf [0:KHEIGHT*IWIDTH*ICHAN-1];
reg rowbuf_we;		// write enable
reg [17:0] rowbuf_wa;	// write address, excess width will be optimized away
reg [17:0] rowbuf_wd;	// write data
reg [17:0] rowbuf_ra;	// read address
reg [17:0] rowbuf_rd0,rowbuf_rd;	// read data + pipeline stage
always @(posedge clk) begin
	if (rowbuf_we)
		rowbuf[rowbuf_wa] <= rowbuf_wd;
	rowbuf_rd0 <= rowbuf[rowbuf_ra];
	rowbuf_rd <= rowbuf_rd0;
end

// conv2d weights BRAM, 1R
reg signed [17:0] weights [0:OCHAN*KHEIGHT*KWIDTH*ICHAN-1];
initial $readmemb(WEIGHTS,weights); // ROM
reg [17:0] weights_ra;	// read address, excess width will be optimized away
reg [17:0] weights_rd0,weights_rd;	// read data
always @(posedge clk) begin
	weights_rd0 <= weights[weights_ra];
	weights_rd <= weights_rd0;
end

// dsp
reg signed [47:0] mult,acc;
reg acc_clear;
always @(posedge clk) begin
	mult <= rowbuf_rd*weights_rd;
	if (acc_clear) begin
		acc <= 'd0;
	end
	else begin
		acc <= mult+acc;
	end
end

// write incoming samples to row buffer at wptr
reg [17:0] wptr,wcnt;
always @(posedge clk) begin
	if (reset) begin
		wptr <= 'd0;
		wcnt <= 'd0;
		rowbuf_we <= 1'b0;
	end
	else if (tvalid_i) begin
		rowbuf_we <= 1'b1;
		rowbuf_wd <= tdata_i;
		rowbuf_wa <= wptr;
		wptr <= (wptr==(KHEIGHT*IWIDTH*ICHAN-1)) ? 'd0 : wptr+'d1;
		wcnt <= wcnt+'d1;
	end
	else begin
		rowbuf_we <= 1'b0;
	end
end

// iterator
reg [17:0] rcnt,optr,rptr,k,j,rcol;
reg [3:0] state;
localparam IDLE		= 'h1;
localparam INIT		= 'h2;
localparam ITER		= 'd4;
localparam DONE		= 'd8;
always @(posedge clk) begin
	if (reset) begin
		state <= IDLE;
		rcnt <= (ICHAN*IWIDTH*(KHEIGHT-1))+(ICHAN*KWIDTH-1); // location of first complete patch
		rptr <= 'd0;
		rcol <= 'd0;
	end
	else begin
		case(state)
    		IDLE : begin
			tvalid_o <= 'b0;
			tlast_o <= 'b0;
			acc_clear <= 1'b1;
			if (wcnt>rcnt) begin
				// we have a complete patch at rptr to process, start computing ochan dot products
				state <= INIT;
			end
		end

    		INIT : begin // for timing
			k <= 'd0;
			j <= 'd0;
			optr <= 'd0;
			state <= ITER;
		end

    		ITER : begin // compute dot product for patch at rptr
			tvalid_o <= (j==ICHAN*KWIDTH*KHEIGHT-1);
			tlast_o <= 'b0;
			acc_clear <= 1'b0;
			rowbuf_ra <= rptr;
			weights_ra <= optr;
			if (optr==OCHAN*KHEIGHT*KWIDTH*ICHAN-1)
				state <= DONE;
			else
				optr <= optr+'d1;

			if (rptr<(KHEIGHT-1)*IWIDTH*ICHAN)
				rptr <= (k==ICHAN*KWIDTH-1) ? rptr+ICHAN*IWIDTH-ICHAN*KWIDTH : rptr+'d1;
			else
				rptr <= (k==ICHAN*KWIDTH-1) ? rptr-ICHAN*IWIDTH*(KHEIGHT-1)-ICHAN*KWIDTH : rptr+'d1;

			k <= (k==ICHAN*KWIDTH-1) ? 'd0 : k+'d1; // horizontal strip counter
			j <= (j==ICHAN*KWIDTH*KHEIGHT-1) ? 'd0 : j+'d1; // patch counter
		end

    		DONE : begin // advance rcol,rcnt,rptr to next patch
			if (rcol>=(IWIDTH-KWIDTH)) begin
				rcol <= 'd0;
				rcnt <= rcnt+(STRIDE*IWIDTH*ICHAN-KWIDTH*ICHAN);
				if (rptr<(KHEIGHT*IWIDTH*ICHAN)-(STRIDE*IWIDTH*ICHAN-KWIDTH*ICHAN))
					rptr <= rptr+(STRIDE*IWIDTH*ICHAN-KWIDTH*ICHAN);
				else
					rptr <= rptr+(STRIDE*IWIDTH*ICHAN-KWIDTH*ICHAN)-(KHEIGHT*IWIDTH*ICHAN*STRIDE);
			end
			else begin
				rcol <= rcol+STRIDE;
				rcnt <= rcnt+STRIDE*ICHAN;
				rptr <= rptr+STRIDE*ICHAN;
			end
			tvalid_o <= 'b0;
			tlast_o <= 'b1;
			if (acc<0)
				tdata_o <= 'd0;	// RELU
			else if (acc>=(1<<(34+ODECIMAL)))
				tdata_o <= (1<<(34+ODECIMAL))-1; // clip
			else
				tdata_o <= acc[34+ODECIMAL:34+ODECIMAL-17];	// fixed point
			state <= IDLE;
		end

		default:
			state <= IDLE;
		endcase
	end
end
endmodule
