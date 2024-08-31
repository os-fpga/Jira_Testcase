module top(
  input wire din,
  input wire clk,
  output reg dout
);

  always @ (posedge clk) begin
    dout <= ~din;
  end

endmodule
