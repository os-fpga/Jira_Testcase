/////////////////////////////////////////
//  Functionality: flop to flop path
//  Author:        George Chen
////////////////////////////////////////
// `timescale 1ns / 1ps


module rs_dsp_mult_test(
			a,
			b,
			z,
			feedback,
			unsigned_a,
			unsigned_b);

   input [19:0] a;            // 20-bit data input for multipluier or accumulator loading
   input [17:0] b;            // 18-bit data input for multiplication
   output [37:0] z;           // 38-bit data output
   input [2:0] 	 feedback;    // 3-bit feedback input selects coefficient
   input 	 unsigned_a;  // Selects signed or unsigned data for A input
   input 	 unsigned_b;   // Selects signed or unsigned data for B input

  RS_DSP_MULT dut (
		   .a(a),
		   .b(b),
		   .z(z),
		   .feedback(feedback),
		   .unsigned_a(unsigned_a),
		   .unsigned_b(unsigned_b)
		   );
   
endmodule
