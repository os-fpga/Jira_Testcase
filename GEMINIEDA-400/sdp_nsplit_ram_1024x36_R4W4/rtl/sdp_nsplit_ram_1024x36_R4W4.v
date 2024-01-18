

module sdp_nsplit_ram_1024x36_R4W4 (
  input clk, we,
  input [9:0] wr_addr, rd_addr,
  input [35:0] din, 
  output [35:0] dout);

parameter [80:0] MODE_BITS =81'h1248;


 TDP36K  #(.MODE_BITS(81'h1248))
  inst1(
    .ADDR_A1_i({ 1'h0, wr_addr, 4'h0 }),
    .ADDR_A2_i(0),
    .ADDR_B1_i({ 1'h0, rd_addr, 4'h0 }),
    .ADDR_B2_i(0),
    .BE_A1_i({1, 1}),
    .BE_A2_i(0),
    .BE_B1_i({1, 1}),
    .BE_B2_i(0),
    .CLK_A1_i(clk),
    .CLK_A2_i(clk),
    .CLK_B1_i(clk),
    .CLK_B2_i(clk),
    .FLUSH1_i(0),
    .FLUSH2_i(0),
    .RDATA_A1_o(dout),
    .RDATA_A2_o(),
    .RDATA_B1_o(dout),
    .RDATA_B2_o(),
    .REN_A1_i(0),
    .REN_A2_i(0),
    .REN_B1_i(0),
    .REN_B2_i(0),
    .RESET_ni(1),
    .WDATA_A1_i(din),
    .WDATA_A2_i(0),
    .WDATA_B1_i(din),
    .WDATA_B2_i(0),
    .WEN_A1_i(we),
    .WEN_A2_i(0),
    .WEN_B1_i(we),
    .WEN_B2_i(0)
  );
 

endmodule
