/////////////////////////////////////////
//  Functionality: I_BUF_DS and O_BUF_DS
//  Author:
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

          |------------------------------------|
          |                                    |
   in_P --|-->|----------|       |----------|--|--> out_P
          |   | I_BUF_DS |       | O_BUF_DS |  |
   in_N --|-->|----------|       |----------|--|--> out_N
          |                                    |
          |------------------------------------|

  SW Readiness:

    SYN:: No
    PPDB:: No
    BitGen:: No

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-12
*/

module top (
  input wire in_P,
  input wire in_N,
  output wire out_P,
  output wire out_N
);
  wire interconnect_in,interconnect_out;
  assign interconnect_out = ~interconnect_in;
  I_BUF_DS DATA_INPUT_BUFFER(
    .I_P(in_P),
    .I_N(in_N),
    .EN(1'b1),
    .O(interconnect_in)
  );
  O_BUF_DS DATA_OUT_BUFFER(
    .I(interconnect_out),
    .O_P(out_P),
    .O_N(out_N)
  );
endmodule
