module test (tm3_clk_v0, vidin_new_data, vidin_in, vidin_out_f1); 

   input tm3_clk_v0; 
   input vidin_new_data; 
   input[7:0] vidin_in; 
   output[15:0] vidin_out_f1; 
   wire[15:0] vidin_out_f1;

   wire[7:0] buff_out0; 
   wire[7:0] buff_out1; 
   wire[7:0] buff_out2; 
   
 	fifo226 fifo0(tm3_clk_v0, vidin_new_data, buff_out0, buff_out1);
 	fifo226 fifo1(tm3_clk_v0, vidin_new_data, buff_out1, buff_out2);

  fltr_compute_f1 inst_fltr_compute_f1 (tm3_clk_v0, {buff_out1,buff_out2}, vidin_out_f1);	

   assign buff_out0 = vidin_in ; 
endmodule
module fltr_compute_f1 (clk, din, dout);

    input clk; 
    input[55:0] din; 
    output[15:0] dout; 
    reg[15:0] dout=0;
    reg[16:0] q1=0; 
    reg[16:0] q2=0; 
    reg[16:0] q3=0; 
    reg[16:0] q4=0; 
    reg[16:0] q5=0; 
    reg[16:0] q6=0; 
    reg[16:0] q7=0; 
    reg[19:0] d_out_tmp=0; 

    always @(posedge clk)
    begin
			// PAJ - grabbed these from the mult_const declarations
			q1 <= din[55:48] * 5'b11101;
			q2 <= din[47:40] * 7'b1100101;
			q3 <= din[39:32] * 5'b10001;
			q4 <= din[31:24] * 9'b100010101;
			q5 <= din[23:16] * 5'b10001;
			q6 <= din[15:8] * 7'b1100101;
			q7 <= din[7:0] * 5'b11101;

          d_out_tmp <= ({q1[16], q1[16], q1[16], q1}) + ({q2[16], q2[16], q2[16], q2}) + ({q3[16], q3[16], q3[16], q3}) + ({q4[16], q4[16], q4[16], q4}) + ({q5[16], q5[16], q5[16], q5}) + ({q6[16], q6[16], q6[16], q6}) + ({q7[16], q7[16], q7[16], q7});
          dout <= d_out_tmp[18:3] ; 
    end 
 endmodule
 
`define WIDTH_4B 4'b1000
module fifo226 (clk, wen, din, dout);

//	parameter `WIDTH = 4'b1000;

    input clk; 
    input wen; 
    input[`WIDTH_4B - 1:0] din; 
    output[`WIDTH_4B - 1:0] dout; 
    reg[`WIDTH_4B - 1:0] dout=0;

    reg[`WIDTH_4B-1:0]buff1=0; 
    reg[`WIDTH_4B-1:0]buff2=0; 

    always @(posedge clk)
    begin
		if (wen == 1'b1)
		begin
			buff1 <= din;
			buff2 <= buff1;
			dout <= buff2;
		end
	end
endmodule