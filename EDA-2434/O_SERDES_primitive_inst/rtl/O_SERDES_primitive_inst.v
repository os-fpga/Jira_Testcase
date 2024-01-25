localparam  DATA_RATE = "SDR";
localparam  WIDTH = 4;

module O_SERDES_primitive_inst(
  input [WIDTH-1:0] D, // D input bus
  input RST, // Active-low, asynchronous reset
  input LOAD_WORD, // Load word input
  input CLK_IN, // Fabric clock input
  input OE_IN, // Output tri-state enable input
  output OE_OUT, // Output tri-state enable output (conttect to O_BUFT or inferred tri-state signal)
  output Q, // Data output (Connect to output port, buffer or O_DELAY)
  input CHANNEL_BOND_SYNC_IN, // Channel bond sync input
  output CHANNEL_BOND_SYNC_OUT, // Channel bond sync output
  input PLL_LOCK, // PLL lock input
  input PLL_CLK // PLL clock input
);

O_SERDES #(
  .DATA_RATE("SDR"), // Single or double data rate (SDR/DDR)
  .WIDTH(WIDTH) // Width of input data to serializer (3-10)
) isnt(
  .D(D), // D input bus
  .RST(RST), // Active-low, asynchronous reset
  .LOAD_WORD(LOAD_WORD), // Load word input
  .CLK_IN(CLK_IN), // Fabric clock input
  .OE_IN(OE_IN), // Output tri-state enable input
  .OE_OUT(OE_OUT), // Output tri-state enable output (conttect to O_BUFT or inferred tri-state signal)
  .Q(Q), // Data output (Connect to output port, buffer or O_DELAY)
  .CHANNEL_BOND_SYNC_IN(CHANNEL_BOND_SYNC_IN), // Channel bond sync input
  .CHANNEL_BOND_SYNC_OUT(CHANNEL_BOND_SYNC_OUT), // Channel bond sync output
  .PLL_LOCK(PLL_LOCK), // PLL lock input
  .PLL_CLK(PLL_CLK) // PLL clock input
);

endmodule
