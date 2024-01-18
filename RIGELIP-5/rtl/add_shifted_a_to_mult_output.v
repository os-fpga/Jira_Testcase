`define ADD_SHIFTED_A_TO_MULT_OUTPUT 1
module add_shifted_a_to_mult_output (
	input  wire [19:0] a,
    input  wire [17:0] b,
    input  wire clock0, reset,
    input  wire [5:0] acc_fir,
    input  [0:$clog2(`ADD_SHIFTED_A_TO_MULT_OUTPUT) - 1] id,
    output wire [37:0] out
    );
    wire [37:0] out_w [0:`ADD_SHIFTED_A_TO_MULT_OUTPUT - 1];

    genvar k;
	generate
		for(k=0;k<`ADD_SHIFTED_A_TO_MULT_OUTPUT;k=k+1)begin
			add_shifted_a_to_mult_output_unit a0(.a(a),.b(b),.clock0(clock0), .reset(reset), .acc_fir(acc_fir),.z_out(out_w[k]));
		end
	endgenerate
    assign out = out_w[id];

endmodule


module add_shifted_a_to_mult_output_unit (
	input  wire [19:0] a,
    input  wire [17:0] b,
    input  wire clock0,
    input  wire reset,
    input  wire [5:0] acc_fir,
    output wire [37:0] z_out
    );
    parameter [79:0] MODE_BITS = 80'hA5A5A;
    wire [37:0] z_w;
	RS_DSP_MULTADD #(.MODE_BITS(MODE_BITS)) 
        inst(.a(a), .b(b), .z(z_w), .clk(clock0), .lreset(reset), .load_acc(1'b0), .feedback(3'd4), .acc_fir(acc_fir), .unsigned_a(1'b1),
        .unsigned_b(1'b1), .saturate_enable(1'b0), .shift_right(6'd0), .round(1'b0), .subtract(1'b0));
	
    assign z_out = z_w;

endmodule