/////////////////////////////////////////
//  Functionality:
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

          |---------------------------------------------------------------------|
          |                                                                     |
    clk --|--> I_BUF --> CLK_BUF                                                |
          |                                                                     |
  reset --|--> I_BUF                                                            |
          |                                                                     |
 enable --|--> I_BUF                                                            |
          |                                                                     |
  din_p --|-->|----------|     |-------|-->                                     |
          |   | I_BUF_DS | --> | I_DDR |                                        |
  din_n --|-->|----------|     |-------|-->                                     |
          |                                                                     |
          |                                      -->|-------|     |----------|--|--> dout_p
          |                                         | O_DDR | --> | O_BUF_DS |  |
          |                                      -->|-------|     |----------|--|--> dout_n
          |                                                                     |
          |---------------------------------------------------------------------|

  SW Readiness:

    SYN:: Yes
    PPDB:: Yes
    BitGen:: No

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-24 + GJC-26
*/

module top (
  input wire clk,
  input wire reset,
  input wire enable,
  input wire din_p,
  input wire din_n,
  output wire dout_p,
  output wire dout_n
);
  wire clk_buf_i;
  wire clk_clk_buf;
  wire i_ddr_d;
  wire o_ddr_d;
  wire o_buf_ds_i;
  I_BUF clk_i_buf(
    .I(clk),
    .EN(1'b1),
    .O(clk_buf_i)
  );
  CLK_BUF clk_buf(
    .I(clk_buf_i),
    .O(clk_clk_buf)
  );
  I_BUF_DS i_buf_ds(
    .I_P(din_p),
    .I_N(din_n),
    .EN(1'b1),
    .O(i_ddr_d)
  );
  I_DDR i_ddr(
    .D(i_ddr_d),
    .R(reset),
    .E(enable),
    .C(clk_clk_buf),
    .Q(o_ddr_d)
  );
  O_DDR o_ddr(
    .D(o_ddr_d),
    .R(reset),
    .E(enable),
    .C(clk_clk_buf),
    .Q(o_buf_ds_i)
  );
  O_BUF_DS o_buf_ds(
    .I(o_buf_ds_i),
    .O_P(dout_p),
    .O_N(dout_n)
  );
endmodule
