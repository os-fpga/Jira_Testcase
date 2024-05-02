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
