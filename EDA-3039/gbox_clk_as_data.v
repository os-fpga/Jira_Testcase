module gbox_clk_as_data (
  input wire clk,
  input wire din,
  output wire dout
);
  wire clk_ibuf;
  wire din_ibuf;
  wire clk_clk_buf;
  wire dout_obuf;
  wire const1;
  
  assign const1 = 1'b1;

  I_BUF clk_i_buf (
    .I(clk),
    .EN(const1),
    .O(clk_ibuf)
  );
  I_BUF din_i_buf (
    .I(din),
    .EN(const1),
    .O(din_ibuf)
  );
  CLK_BUF clk_buf(
    .I(clk_ibuf),
    .O(clk_clk_buf)
  );
  reg temp;
  always @(posedge clk_clk_buf) begin
    temp <= din_ibuf;
  end
  assign dout_obuf = temp & clk_ibuf;
  O_BUFT o_buft(
    .I(dout_obuf),
    .T(const1),
    .O(dout)
  );
endmodule