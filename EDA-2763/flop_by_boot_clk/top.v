/////////////////////////////////////////
//  Functionality: 1. Use BOOT_CLOCK to clock FF
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

module top(
  input wire din,
  output reg dout
);
  wire intosc;
  BOOT_CLOCK boot_clock(
    .O(intosc)
  );
  always @ (posedge intosc) begin
    dout <= ~din;
  end

endmodule
