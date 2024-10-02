module test (tm3_clk_v0, vidin_new_data, vidin_in, vidin_out_f1, vidin_out_f2, vidin_out_f3, vidin_out_h1, vidin_out_h2, vidin_out_h3, vidin_out_h4); // PAJ var never used, vidin_out_or);

   parameter horiz_length  = 8'b11100010;
   parameter vert_length  = 3'b111; // PAJ constant for all

   input tm3_clk_v0; 
   input vidin_new_data; 
   input[7:0] vidin_in; 
   output[15:0] vidin_out_f1; 
   wire[15:0] vidin_out_f1;
  //  output[15:0] vidin_out_f2; 
  //  wire[15:0] vidin_out_f2;
  //  output[15:0] vidin_out_f3; 
  //  wire[15:0] vidin_out_f3;
  //  output[15:0] vidin_out_h1; 
  //  wire[15:0] vidin_out_h1;
  //  output[15:0] vidin_out_h2; 
  //  wire[15:0] vidin_out_h2;
  //  output[15:0] vidin_out_h3; 
  //  wire[15:0] vidin_out_h3;
  //  output[15:0] vidin_out_h4; 
  //  wire[15:0] vidin_out_h4;
//   output[7:0] vidin_out_or; 
//   reg[7:0] vidin_out_or;

   wire[7:0] buff_out0; 
   wire[7:0] buff_out1; 
   wire[7:0] buff_out2; 
   wire[7:0] buff_out3; 
   wire[7:0] buff_out4; 
   wire[7:0] buff_out5; 
   wire[7:0] buff_out6; 
   wire[7:0] buff_out7; 
   
 	fifo226 fifo0(tm3_clk_v0, 1, buff_out0, buff_out1);
 	fifo226 fifo1(tm3_clk_v0, 1, buff_out1, buff_out2);
 	fifo226 fifo2(tm3_clk_v0, 1, buff_out2, buff_out3);
 	fifo226 fifo3(tm3_clk_v0, 1, buff_out3, buff_out4);
 	fifo226 fifo4(tm3_clk_v0, 1, buff_out4, buff_out5);
 	fifo226 fifo5(tm3_clk_v0, 1, buff_out5, buff_out6);
 	fifo226 fifo6(tm3_clk_v0, 1, buff_out6, buff_out7);

   fltr_compute_f1 inst_fltr_compute_f1 (tm3_clk_v0, {buff_out1, buff_out2, buff_out3, buff_out4, buff_out5, buff_out6, buff_out7}, vidin_out_f1);	
  //  fltr_compute_f2 inst_fltr_compute_f2 (tm3_clk_v0, {buff_out1, buff_out2, buff_out3, buff_out4, buff_out5, buff_out6, buff_out7}, vidin_out_f2);	
  //  fltr_compute_f3 inst_fltr_compute_f3 (tm3_clk_v0, {buff_out1, buff_out2, buff_out3, buff_out4, buff_out5, buff_out6, buff_out7}, vidin_out_f3);	
  //  fltr_compute_h1 inst_fltr_compute_h1 (tm3_clk_v0, {buff_out1, buff_out2, buff_out3, buff_out4, buff_out5, buff_out6, buff_out7}, vidin_out_h1);	
  //  fltr_compute_h2 inst_fltr_compute_h2 (tm3_clk_v0, {buff_out1, buff_out2, buff_out3, buff_out4, buff_out5, buff_out6, buff_out7}, vidin_out_h2);	
  //  fltr_compute_h3 inst_fltr_compute_h3 (tm3_clk_v0, {buff_out1, buff_out2, buff_out3, buff_out4, buff_out5, buff_out6, buff_out7}, vidin_out_h3);	
  //  fltr_compute_h4 inst_fltr_compute_h4 (tm3_clk_v0, {buff_out1, buff_out2, buff_out3, buff_out4, buff_out5, buff_out6, buff_out7}, vidin_out_h4);	

   assign buff_out0 = vidin_in ; 
/*
   always @(posedge tm3_clk_v0)
   begin
         buff_out0 <= vidin_in ; 
         //vidin_out_or <= buff_out6; 
   end 
*/
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
module fltr_compute_f2 (clk, din, dout);

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
			q1 <= din[55:48] * 3'b100;
			q2 <= din[47:40] * 6'b101010;
			q3 <= din[39:32] * 8'b10100011;
			q4 <= din[31:24] * 8'b11111111;
			q5 <= din[23:16] * 8'b10100011;
			q6 <= din[15:8] * 6'b101010;
			q7 <= din[7:0] * 3'b100;

          d_out_tmp <= ({q1[16], q1[16], q1[16], q1}) + ({q2[16], q2[16], q2[16], q2}) + ({q3[16], q3[16], q3[16], q3}) + ({q4[16], q4[16], q4[16], q4}) + ({q5[16], q5[16], q5[16], q5}) + ({q6[16], q6[16], q6[16], q6}) + ({q7[16], q7[16], q7[16], q7});
          dout <= d_out_tmp[18:3] ; 
    end 
 endmodule









module fltr_compute_f3 (clk, din, dout);

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
			q1 <= din[55:48] * 5'b10100;
			q2 <= din[47:40] * 8'b10110011;
			q3 <= din[39:32] * 9'b101101100;
			q4 <= din[31:24] * 16'b0000000000000000;
			q5 <= din[23:16] * 9'b101101100;
			q6 <= din[15:8] * 8'b10110011;
			q7 <= din[7:0] * 5'b10100;

          d_out_tmp <= ({q1[16], q1[16], q1[16], q1}) + ({q2[16], q2[16], q2[16], q2}) + ({q3[16], q3[16], q3[16], q3}) + ({q4[16], q4[16], q4[16], q4}) + ({q5[16], q5[16], q5[16], q5}) + ({q6[16], q6[16], q6[16], q6}) + ({q7[16], q7[16], q7[16], q7});
          dout <= d_out_tmp[18:3] ; 
    end 

 endmodule
module fltr_compute_h1 (clk, din, dout);

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
			q1 <= din[55:48] * 5'b10001;
			q2 <= din[47:40] * 5'b11001;
			q3 <= din[39:32] * 8'b11000001;
			q4 <= din[31:24] * 16'b0000000000000000;
			q5 <= din[23:16] * 8'b11000001;
			q6 <= din[15:8] * 5'b11001;
			q7 <= din[7:0] * 5'b10001;

          d_out_tmp <= ({q1[16], q1[16], q1[16], q1}) + ({q2[16], q2[16], q2[16], q2}) + ({q3[16], q3[16], q3[16], q3}) + ({q4[16], q4[16], q4[16], q4}) + ({q5[16], q5[16], q5[16], q5}) + ({q6[16], q6[16], q6[16], q6}) + ({q7[16], q7[16], q7[16], q7});
          dout <= d_out_tmp[18:3] ; 
    end 
 endmodule


module fltr_compute_h2 (clk, din, dout);

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
			q1 <= din[55:48] * 3'b100;
			q2 <= din[47:40] * 6'b101010;
			q3 <= din[39:32] * 8'b10100011;
			q4 <= din[31:24] * 8'b11111111;
			q5 <= din[23:16] * 8'b10100011;
			q6 <= din[15:8] * 6'b101010;
			q7 <= din[7:0] * 3'b100;

          d_out_tmp <= ({q1[16], q1[16], q1[16], q1}) + ({q2[16], q2[16], q2[16], q2}) + ({q3[16], q3[16], q3[16], q3}) + ({q4[16], q4[16], q4[16], q4}) + ({q5[16], q5[16], q5[16], q5}) + ({q6[16], q6[16], q6[16], q6}) + ({q7[16], q7[16], q7[16], q7});
         dout <= d_out_tmp[18:3] ; 
   end 
endmodule







module fltr_compute_h3 (clk, din, dout);

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
			q1 <= din[55:48] * 5'b10111;
			q2 <= din[47:40] * 7'b1001000;
			q3 <= din[39:32] * 8'b10010011;
			q4 <= din[31:24] * 16'b0000000000000000;
			q5 <= din[23:16] * 8'b10010011;
			q6 <= din[15:8] * 7'b1001000;
			q7 <= din[7:0] * 5'b10111;

          d_out_tmp <= ({q1[16], q1[16], q1[16], q1}) + ({q2[16], q2[16], q2[16], q2}) + ({q3[16], q3[16], q3[16], q3}) + ({q4[16], q4[16], q4[16], q4}) + ({q5[16], q5[16], q5[16], q5}) + ({q6[16], q6[16], q6[16], q6}) + ({q7[16], q7[16], q7[16], q7});
         dout <= d_out_tmp[18:3] ; 
   end 
endmodule




module fltr_compute_h4 (clk, din, dout);

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
			q1 <= din[55:48] * 4'b1110;
			q2 <= din[47:40] * 6'b101011;
			q3 <= din[39:32] * 7'b1010000;
			q4 <= din[31:24] * 9'b101000100;
			q5 <= din[23:16] * 7'b1010000;
			q6 <= din[15:8] * 6'b101011;
			q7 <= din[7:0] * 4'b1110;

          d_out_tmp <= ({q1[16], q1[16], q1[16], q1}) + ({q2[16], q2[16], q2[16], q2}) + ({q3[16], q3[16], q3[16], q3}) + ({q4[16], q4[16], q4[16], q4}) + ({q5[16], q5[16], q5[16], q5}) + ({q6[16], q6[16], q6[16], q6}) + ({q7[16], q7[16], q7[16], q7});
         dout <= d_out_tmp[18:3] ; 
   end 
endmodule

module fifo226 (clk, wen, din, dout);

//	parameter `WIDTH = 4'b1000;

    input clk; 
    input wen; 
    input[4'b1000 - 1:0] din; 
    output[4'b1000 - 1:0] dout; 
    reg[4'b1000 - 1:0] dout=0;

    reg[4'b1000-1:0]buff1=0; 
    reg[4'b1000-1:0]buff2=0; 

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