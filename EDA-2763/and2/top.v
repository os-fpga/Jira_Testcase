/////////////////////////////////////////
//  Functionality: 1. Basic AND logic test
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

module top(
  input wire a,
  input wire b,
  output wire c
);

  assign c = a & b;

endmodule
