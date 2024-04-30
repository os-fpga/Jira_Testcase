/////////////////////////////////////////
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

                 |------------------------------------------------|
                 |                                                |
           din --|--> I_BUF                                       |
                 |                                                |
                 |                                        O_BUF --|--> dout
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
