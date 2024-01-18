

module sdp_nsplit_ram_1024x36_R4W4 (
  input clk, we,
  input [9:0] wr_addr, rd_addr,
  input [35:0] din, 
  output [35:0] dout);

// parameter [80:0] MODE_BITS =81'h1248;
// parameter [36863:0] INIT_i = 36864'h0;

//.INIT_i(36864'h0),
//#(.MODE_BITS(81'h1248))
 TDP36K   #(.INIT_i(36864'h0), .MODE_BITS(81'h1248))
  inst1(
    .ADDR_A1_i({ 1'h0, wr_addr, 4'h0 }),
    .ADDR_A2_i(14'b0),
    .ADDR_B1_i({ 1'h0, rd_addr, 4'h0 }),
    .ADDR_B2_i(14'b0),
    .BE_A1_i({1'b1, 1'b1}),
    .BE_A2_i(2'b0),
    .BE_B1_i({1'b1, 1'b1}),
    .BE_B2_i(2'b0),
    .CLK_A1_i(clk),
    .CLK_A2_i(clk),
    .CLK_B1_i(clk),
    .CLK_B2_i(clk),
    .FLUSH1_i(1'b0),
    .FLUSH2_i(1'b0),
    .RDATA_A1_o({dout[33:32],dout[15:0]}),
    .RDATA_A2_o(),
    .RDATA_B1_o({dout[35:34],dout[31:16]}),
    .RDATA_B2_o(),
    .REN_A1_i(1'b0),
    .REN_A2_i(1'b0),
    .REN_B1_i(1'b0),
    .REN_B2_i(1'b0),
    .RESET_ni(1'b1),
    .WDATA_A1_i({din[33:32],din[15:0]}),
    .WDATA_A2_i(18'b0),
    .WDATA_B1_i({din[35:34],din[31:16]}),
    .WDATA_B2_i(18'b0),
    .WEN_A1_i(we),
    .WEN_A2_i(1'b0),
    .WEN_B1_i(we),
    .WEN_B2_i(1'b0)
  );
 

endmodule
