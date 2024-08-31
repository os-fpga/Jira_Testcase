/////////////////////////////////////////
//  Functionality: 1. Use regular pin (without naming _CC) to clock FF
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

module top(
  input wire din,
  input wire clk,
  output reg dout
);

  always @ (posedge clk) begin
    dout <= ~din;
  end

endmodule
