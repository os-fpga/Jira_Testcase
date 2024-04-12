/////////////////////////////////////////
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

                |------------------------------------|
                |                                    |
          din --|--> I_BUF                           |
                |                                    |
 out_tristate --|--> I_BUF                           |
                |                                    |
                |                           O_BUFT --|--> dout
                |                                    |
                |------------------------------------|

  SW Readiness:

    SYN:: Yes
    PPDB:: Yes
    BitGen:: Yes

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-14
*/

module top(
  input wire din,
  input wire out_tristate,
  output wire dout
);
  O_BUFT o_buft(
    .I(din),
    .T(out_tristate),
    .O(dout)
  );
endmodule
