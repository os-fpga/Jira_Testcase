/////////////////////////////////////////
//  Functionality:
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

module top (
  input din_p,
  input din_n,
  input clk,
  output dout_p,
  output dout_n
);
  wire din;
  reg dout;
  I_BUF_DS i_buf_ds(
    .I_P(din_p),
    .I_N(din_n),
    .EN(1'b1),
    .O(din)
  );
  always @ (posedge clk) begin
    dout <= ~din;
  end
  O_BUFT_DS o_buft_ds(
    .I(dout),
    .T(1'b1),
    .O_P(dout_p),
    .O_N(dout_n)
  );

endmodule
