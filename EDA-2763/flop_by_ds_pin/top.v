module top(
  input wire din,
  input wire clk_p,
  input wire clk_n,
  output reg dout
);

  wire clk;
  I_BUF_DS i_buf_ds
  (
    .I_P(clk_p),
    .I_N(clk_n),
    .O(clk)
  );

  always @ (posedge clk) begin
    dout <= ~din;
  end

endmodule