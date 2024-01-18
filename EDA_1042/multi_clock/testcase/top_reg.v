module top_reg (
	input clk_a, 
	input reset, 
//	input subtract_i,
 //       input [19:0] A,
  //      input [17:0] B,
   //     output [37:0] P,
	input clk_b,
	input clk_c,
//	input 	we,
 //       input [8:0] read_addr, 
  //      input [8:0] write_addr,
   //     input [31:0] din,
    //    output [31:0] dout,
	output reg [3:0] compare_done_reg
);


wire [3:0] compare_done_i;

//dsp_mul_signed_reg_with_accum dsp (.clk(clk_a),.reset(reset),.subtract_i(subtract_i),.A(A),.B(B),.P(P));


//ram_simple_dp_reg_addr_512x32 ram (.clk(clk_b),.we(we),.read_addr(read_addr),.write_addr(write_addr),.din(din),.dout(dout));
//

reg [31:0] a_reg;
reg [31:0] b_reg;


always@(posedge clk_a)
begin
if(reset)
a_reg<=0;
else
a_reg<=a_reg+1;
end

always@(posedge clk_b)
begin
if(reset)
	b_reg<=a_reg;
else
	b_reg<=b_reg+1;
end


assign compare_done_i = (a_reg[31:0] == b_reg[31:0])? 4'b0101: 4'b1010;

always@(posedge clk_c)
begin
compare_done_reg<=compare_done_i;
end


endmodule
