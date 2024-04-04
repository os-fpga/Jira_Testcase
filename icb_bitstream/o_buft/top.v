/////////////////////////////////////////
//  Functionality: Tri state buffer with inverted input data and
//                 control signals
//                 - O_BUFT
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
          |                           O_BUFT --|--> data_o
          |                                    |
          |------------------------------------|

  SW Readiness:

    SYN:: Yes
    PPDB:: Yes
    BitGen:: No

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-14
*/

module top(
  input wire data_i,
  input wire ctrl_T,
  output wire data_o
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
  O_BUFT buft_o(
    .I(data_i_buft),
    .T(ctrl_T_buft),
    .O(data_o)
  );

endmodule
