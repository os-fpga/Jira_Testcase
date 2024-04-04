/////////////////////////////////////////
//  Functionality: Alternating 10 generated is delayed and sent out,
//                 also a non delayed version of same data is sent
//                 out for reference. Using inverted control signals,
//                 delay can be adjusted accordingly
//                 - O_DELAY
//  Author:        Azfar
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

              |------------------------------------|
              |                                    |
      clk_i --|--> I_BUF --> CLK_BUF               |
              |                                    |
 dly_incdec --|--> I_BUF                           |
              |                                    |
     dly_ld --|--> I_BUF                           |
              |                                    |
    dly_adj --|--> I_BUF                           |
              |                                    |
              |                O_DELAY --> O_BUF --|--> data_o_delayed
              |                                    |
              |                            O_BUF --|--> data_o_inv_delayed
              |                                    |
              |                            O_BUF --|--> dly_tap_val_inv
              |                                    |
              |------------------------------------|

  SW Readiness:

    SYN:: Yes
    PPDB:: Yes
    BitGen:: No

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-18
*/

module i_delay_o_buf (
  input wire clk_i,
  input wire dly_incdec,
  input wire dly_ld,
  input wire dly_adj,
  output wire data_o_delayed,
  output wire data_o_ref,
  output wire [5:0] dly_tap_val_inv
);
  reg test_data;
  wire dly_adj_inv, dly_incdec_inv, dly_ld_inv;
  wire data_o_delayed_buf;
  wire [5:0] dly_tap_val;
  assign data_o_ref = test_data;
  assign dly_adj_inv = ~dly_adj;
  assign dly_incdec_inv = ~dly_incdec;
  assign dly_ld_inv = ~dly_ld;
  assign dly_tap_val_inv = ~dly_tap_val;
  always @(clk_i) begin
    if (clk_i)
      test_data <= 1;
    else 
      test_data <= 0;
  end
  O_DELAY data_o_delay(
    .I(test_data), 
    .DLY_LOAD(dly_ld_inv), 
    .DLY_ADJ(dly_adj_inv), 
    .DLY_INCDEC(dly_incdec_inv), 
    .CLK_IN(clk_i), 
    .DLY_TAP_VALUE(dly_tap_val),
    .O(data_o_delayed_buf)
  );
  O_BUF data_buf(
    .I(data_o_delayed_buf),
    .O(data_o_delayed)
  );

endmodule
