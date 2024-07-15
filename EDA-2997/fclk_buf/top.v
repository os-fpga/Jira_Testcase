/////////////////////////////////////////
//  Functionality:
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

          |-------------------------------------------------------------------------------------------|
          |                                                                                           |
          |   |-------|     |---------|                 |----------------------------|                |
    din --|-->| I_BUF | --> | I_DELAY | --------------> |                            |                |
          |   |-------|     |---------|                 |                            |                |
          |                      A                      |                            |                |
          |                      |                      |           Fabric           |                |
          |                      -------|               |                            |                |
          |                             |               |                            |                |
          |   |-------|     |---------| |   |-----|     |                            |                |
    clk --|-->| I_BUF | --> | CLK_BUF | --> | PLL | --> |                            |                |
          |   |-------|     |---------|     |-----|     |                            |                |
          |                                             |                            |                |
          |                                             |                            |                |
          |                                             |                            |     |-------|  |
          |                                             |                            | --> | O_BUF |--|--> dout
          |                                             |----------------------------|     |-------|  |
          |                                                                                           |
          |-------------------------------------------------------------------------------------------|
*/

module top (
  input wire din,
  input wire clk,
  output reg dout
);
  wire clkbuf;
  wire din_delay;
  CLK_BUF clk_buf 
  (
    .I(clk),
    .O(clkbuf)
  );
  PLL #(
    .PLL_MULT(16),
    .PLL_DIV(1),
    .PLL_POST_DIV(34)
  ) pll (
    .PLL_EN(1'b1),
    .CLK_IN(clkbuf),
    .CLK_OUT(pll_clk),
    .CLK_OUT_DIV2(),
    .CLK_OUT_DIV3(),
    .CLK_OUT_DIV4()
  );
  I_DELAY i_delay(
    .I(din),
    .CLK_IN(clkbuf),
    .O(din_delay)
  );
    defparam i_delay.DELAY = 60;  
  always @ (posedge pll_clk) begin
    dout <= din_delay;
  end
endmodule
