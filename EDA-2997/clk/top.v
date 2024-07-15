/////////////////////////////////////////
//  Functionality:
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

          |-------------------------------------------------------------------------------|
          |                                                                               |
          |   |-------|     |---------|     |----------------------------|                |
    din --|-->| I_BUF | --> | I_DELAY | --> |                            |                |
          |   |-------|     |---------|     |                            |                |
          |                      A          |                            |                |
          |                      |          |           Fabric           |                |
          |                      -------|   |                            |                |
          |                             |   |                            |                |
          |   |-------|     |---------| |   |                            |                |
    clk --|-->| I_BUF | --> | CLK_BUF | --> |                            |                |
          |   |-------|     |---------|     |                            |                |
          |                                 |                            |                |
          |                                 |                            |                |
          |                                 |                            |     |-------|  |
          |                                 |                            | --> | O_BUF |--|--> dout
          |                                 |----------------------------|     |-------|  |
          |                                                                               |
          |-------------------------------------------------------------------------------|
*/

module top (
  input wire din,
  input wire clk,
  output reg dout
);
  wire din_delay;
  // Input Delay
  I_DELAY i_delay(
    .I(din),
    .DLY_LOAD(1'b1),
    .DLY_ADJ(1'b1),
    .DLY_INCDEC(1'b0),
    .DLY_TAP_VALUE(delay_tap),
    .CLK_IN(clk),
    .O(din_delay)
  );
    defparam i_delay.DELAY = 50;
  
  always @ (posedge clk) begin
    dout <= din_delay;
  end
endmodule
