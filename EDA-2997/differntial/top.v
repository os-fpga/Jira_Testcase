/////////////////////////////////////////
//  Functionality:
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

          |---------------------------------------------------------------------|
          |                                                                     |
  din_p --|-->|----------|     |----------------------------|                   |
          |   | I_BUF_DS | --> |                            |                   |
  din_n --|-->|----------|     |                            |                   |
          |                    |         Fabric             |                   |
          |                    |                            |                   |
          |                    |                            |     |----------|--|--> dout_p
          |                    |                            | --> | O_BUF_DS |  |
          |                    |----------------------------|     |----------|--|--> dout_n
          |                                                                     |
          |---------------------------------------------------------------------|
*/

module top (
  input wire din_p,
  input wire din_n,
  output wire dout_p,
  output wire dout_n
);
  wire data;
  I_BUF_DS i_buf_ds(
    .I_P(din_p),
    .I_N(din_n),
    .EN(1'b1),
    .O(data)
  );
  O_BUFT_DS o_buft_ds(
    .I(~data),
    .T(1'b1),
    .O_P(dout_p),
    .O_N(dout_n)
  );
endmodule
