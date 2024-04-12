/////////////////////////////////////////
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

                      |---------------------------------------------|
                      |                                             |
                      |              |-----| -->                    |
                clk --|--> I_BUF --> | PLL | -->                    |
                      |              |     | -->                    |
                      |              |-----| -->                    |
                      |                                             |
             data_i --|--> I_BUF                                    |
                      |                                             |
                      |                                     O_BUF --|--> data_o
                      |                                             |
                      |---------------------------------------------|

  SW Readiness:

    SYN:: Yes
    PPDB:: No
    BitGen:: No

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-22
*/

module top (
  input wire clk,
  input wire data_i,
  output reg data_o
);
  wire pll_clk;
  PLL #(
    .PLL_MULT(16),
    .PLL_DIV(1),
    .PLL_POST_DIV(2)
  ) pll (
    .PLL_EN(1'b1),
    .CLK_IN(clk),
    .CLK_OUT(),
    .CLK_OUT_DIV2(),
    .CLK_OUT_DIV3(),
    .CLK_OUT_DIV4(pll_clk)
  );
  always @ (posedge pll_clk) begin
    data_o <= data_i;
  end

endmodule
