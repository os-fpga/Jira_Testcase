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
  input wire din,
  output wire dout
);
  assign dout = din;
endmodule
