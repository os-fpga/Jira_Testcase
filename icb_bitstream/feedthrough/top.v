/////////////////////////////////////////
//  Functionality: Feedthrough
//                 - I_BUF
//                 - O_BUF
//  Author:        George Chen
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

        |------------------------------------|
        |                                    |
  din --|--> I_BUF                           |
        |                                    |
        |                            O_BUF --|--> dout
        |                                    |
        |------------------------------------|

  SW Readiness:

    Yes

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-9
*/

module top(
  input din,
  output dout
);

  assign dout = din;

endmodule
