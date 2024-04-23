/////////////////////////////////////////
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

         |------------------------------------|
         |                                    |
 din_p --|-->|----------|       |----------|--|--> dout_p
         |   | I_BUF_DS |       | O_BUF_DS |  |
 din_n --|-->|----------|       |----------|--|--> dout_n
         |                                    |
         |------------------------------------|

  SW Readiness:

    SYN:: Yes
    PPDB:: Yes
    BitGen:: No

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-12
*/

module top (
  input wire din_p,
  input wire din_n,
  output wire dout_p,
  output wire dout_n
);
  wire o_buf_ds_i;
  I_BUF_DS i_buf_ds(
    .I_P(din_p),
    .I_N(din_n),
    .EN(1'b1),
    .O(o_buf_ds_i)
  );
  O_BUF_DS o_buf_ds(
    .I(o_buf_ds_i),
    .O_P(dout_p),
    .O_N(dout_n)
  );
endmodule
