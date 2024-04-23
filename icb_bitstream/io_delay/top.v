/////////////////////////////////////////
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

                 |------------------------------------------------|
                 |                                                |
           clk --|--> I_BUF --> CLK_BUF                           |
                 |                                                |
    delay_load --|--> I_BUF                                       |
                 |                                                |
     delay_adj --|--> I_BUF                                       |
                 |                                                |
  delay_incdec --|--> I_BUF                                       |
                 |                                                |
           din --|--> I_BUF --> I_DELAY                           |
                 |                                                |
                 |                            O_DELAY --> O_BUF --|--> dout
                 |                                                |
                 |                                        O_BUF --|--> i_delay_value
                 |                                                |
                 |                                        O_BUF --|--> o_delay_value
                 |                                                |
                 |------------------------------------------------|

  SW Readiness:

    SYN:: Yes
    PPDB:: Yes
    BitGen:: Yes

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-18 + GJC-19
*/

module top(
  input wire clk,
  input wire delay_load,
  input wire delay_adj,
  input wire delay_incdec,
  input wire din,
  output wire dout,
  output wire [5:0] i_delay_value,
  output wire [5:0] o_delay_value
);
  wire clk_buf_i;
  wire clk_clk_buf;
  wire o_delay_i;
  I_BUF clk_i_buf(
    .I(clk),
    .EN(1'b1),
    .O(clk_buf_i)
  );
  CLK_BUF clk_buf(
    .I(clk_buf_i),
    .O(clk_clk_buf)
  );
  I_DELAY i_delay(
    .I(din),
    .DLY_LOAD(delay_load),
    .DLY_ADJ(delay_adj),
    .DLY_INCDEC(delay_incdec),
    .DLY_TAP_VALUE(i_delay_value),
    .CLK_IN(clk_clk_buf),
    .O(o_delay_i)
  );
    defparam i_delay.DELAY = 50;
  O_DELAY o_delay(
    .I(o_delay_i),
    .DLY_LOAD(delay_load),
    .DLY_ADJ(delay_adj),
    .DLY_INCDEC(delay_incdec),
    .CLK_IN(clk_clk_buf),
    .DLY_TAP_VALUE(o_delay_value),
    .O(dout)
  );
    defparam o_delay.DELAY = 60;
endmodule
