module top (
  input wire clk,
  input wire din,
  output wire dout
);
  reg temp;
  always @(posedge clk) begin
    temp <= din;
  end
  assign dout = temp & clk;
endmodule
