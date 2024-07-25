
module GJC4_updated(
   input [19:0] a,            // 20-bit data input for multipluier or accumulator loading
   input [17:0] b,            // 18-bit data input for multiplication
   input [2:0] 	 feedback,    // 3-bit feedback input selects coefficient
   input         unsigned_a,  // Selects signed or unsigned data for A input
   input         unsigned_b,   // Selects signed or unsigned data for B input
   output [37:0] z_mult);           // 38-bit data output

   DSP38 #(
           .DSP_MODE("MULTIPLY"),
           .OUTPUT_REG_EN("FALSE"),
           .INPUT_REG_EN("FALSE")
           ) dut_mult (
                  .A(a),
                  .B(b),
                  .Z(z_mult),
                  .FEEDBACK(feedback),
                  .UNSIGNED_A(unsigned_a),
                  .UNSIGNED_B(unsigned_b)
                  );
endmodule
