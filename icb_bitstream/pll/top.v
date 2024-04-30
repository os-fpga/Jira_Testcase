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
 din --|--> I_BUF                                    |
       |                                             |
       |                                     O_BUF --|--> dout
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
  input wire din,
  output reg dout
);
  wire clkbuf;
  CLK_BUF clk_buf (
    .I(clk),
    .O(clkbuf)
  );
  wire pll_clk;
  PLL #(
    .PLL_MULT(16),
    .PLL_DIV(1),
    .PLL_POST_DIV(34)
  ) pll (
    .PLL_EN(1'b1),
    .CLK_IN(clkbuf),
    .CLK_OUT(),
    .CLK_OUT_DIV2(),
    .CLK_OUT_DIV3(),
    .CLK_OUT_DIV4(pll_clk)
  );
  always @ (posedge pll_clk) begin
    dout <= din;
  end

endmodule
