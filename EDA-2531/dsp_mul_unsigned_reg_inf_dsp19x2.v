module dsp_mul_unsigned_reg_inf_dsp19x2 (clk, reset, A, B, P);
	input clk, reset;
	input  [19:0] A;
	input  [17:0] B;
	output reg  [37:0] P;
	reg  [9:0] i1;
	reg  [9:0] i3;
	reg  [8:0] i2;
	reg  [8:0] i4;
	reg  [31:0] mul1;
	reg  [31:0] mul2;
	always @(posedge clk, negedge reset) begin
		if(reset == 0) begin
			i1 <= 0;
			i2 <= 0;
			i3 <= 0;
			i4 <= 0;
		end
		else begin
			i1 <= A[19:10];
			i2 <= B[17:9]; 
			i3 <= A[9:0];  
			i4 <= B[8:0];  

// 			i1 <= A[9:0];
// i2 <= B[8:0];
// i3 <= A[19:10];
// i4 <= B[17:9];
		end
	end
	always @(posedge clk, negedge reset) begin
		if (reset == 0)
			P <= 0;
		else
			P<= {mul2,mul1};
	end

	always @ (*)  begin
		mul1  = i1 * i2;
		mul2  = i3 * i4; 
	end
endmodule 
