/////////////////////////////////////////
//  Functionality: Tri state differential output buffer with
//                 inverted input data and control signals
//                 -- O_BUFT_DS
//  Author:        Azfar
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

          |------------------------------------|
          |                                    |
 data_i --|--> I_BUF                           |
          |                                    |
 ctrl_T --|--> I_BUF                           |
          |                                    |
          |                     |-----------|--|--> data_o_P
          |                     | O_BUFT_DS |  |
          |                     |-----------|--|--> data_o_N
          |                                    |
          |------------------------------------|

  SW Readiness:

    Not Yet

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-15
*/

module top(
  input wire data_i,
  input wire ctrl_T,
  output wire data_o_P,
  output wire data_o_N
);

  wire data_i_buf, ctrl_T_buf;
  wire data_i_buft, ctrl_T_buft;

  I_BUF data_buf(
    .I(data_i),
    .EN(1'b1),
    .O(data_i_buf)
  );
  I_BUF ctrl_buf(
    .I(ctrl_T),
    .EN(1'b1),
    .O(ctrl_T_buf)
  );
  assign data_i_buft = ~data_i_buf;
  assign ctrl_T_buft = ~ctrl_T_buf;
  O_BUFT_DS buft_o(
    .I(data_i_buft),
    .T(ctrl_T_buft),
    .O_P(data_o_P),
    .O_N(data_o_P)
  );

endmodule
