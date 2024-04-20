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
 enable --|--> I_BUF                           |
          |                                    |
          |                     |-----------|--|--> dout_p
          |                     | O_BUFT_DS |  |
          |                     |-----------|--|--> dout_n
          |                                    |
          |------------------------------------|

  SW Readiness:

    SYN:: Yes
    PPDB:: Yes
    BitGen:: No

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-15
*/

module top(
  input wire din,
  input wire enable,
  output wire dout_p,
  output wire dout_n
);
  O_BUFT_DS o_buft_ds(
    .I(din),
    .T(enable),
    .O_P(dout_p),
    .O_N(dout_n)
  );
endmodule
