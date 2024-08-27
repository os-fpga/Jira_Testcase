/////////////////////////////////////////
//  Functionality:
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

module top (
  inout io,
  input ioz,
  input i,
  output o
);

assign io = ioz ? 1'bz : i;
assign o = ioz ? io : i;

endmodule
