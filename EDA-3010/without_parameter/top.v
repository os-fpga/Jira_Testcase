/////////////////////////////////////////
//  Functionality:
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

module top (
  input clk,
  input din,
  output dout
);
  // SERDES
  wire [3:0] serdes_data;
  I_SERDES i_serdes (
    .D(din),              // Data input (connect to input port, buffer or I_DELAY)
    .RX_RST(1'b1),        // Active-low asycnhronous reset
    .BITSLIP_ADJ(1'b1),   // BITSLIP_ADJ input
    .EN(1'b1),            // EN input data (input data is low when driven low)
    .CLK_IN(1'b1),        // Fabric clock input
    .CLK_OUT(),           // Fabric clock output
    .Q(serdes_data),      // Data output
    .DATA_VALID(),        // DATA_VALID output
    .DPA_LOCK(),          // DPA_LOCK output
    .PLL_LOCK(),          // PLL lock input
    .PLL_CLK(clk)         // PLL clock input
  );
  O_SERDES o_serdes (
    .D(~serdes_data),      // D input bus
    .RST(1'b1),           // Active-low, asynchronous reset
    .LOAD_WORD(1'b1),     // Load word input
    .CLK_IN(1'b1),        // Fabric clock input
    .OE_IN(1'b1),         // Output tri-state enable input
    .OE_OUT(),            // Output tri-state enable output (conttect to O_BUFT or inferred tri-state signal)
    .Q(dout),             // Data output (Connect to output port, buffer or O_DELAY)
    .PLL_LOCK(),          // PLL lock input
    .PLL_CLK(clk)         // PLL clock input
  );
endmodule
