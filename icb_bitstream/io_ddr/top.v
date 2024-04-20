/////////////////////////////////////////
//  Author: Chung Shien
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

          |-------------------------------------------------------|
          |                                                       |
    clk --|--> I_BUF --> CLK_BUF                                  |
          |                                                       |
  reset --|--> I_BUF                                              |
          |                                                       |
 enable --|--> I_BUF                                              |
          |                                                       |
          |              |-------|-->                             |
    din --|--> I_BUF --> | I_DDR |                                |
          |              |-------|-->                             |
          |                                                       |
          |                              -->|-------|             |
          |                                 | O_DDR | --> O_BUF --|--> dout
          |                              -->|-------|             |
          |                                                       |
          |-------------------------------------------------------|

  SW Readiness:

    SYN:: Yes
    PPDB:: Yes
    BitGen:: No

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-16 + GJC-17
*/

module top(
  input wire clk,
  input wire reset,
  input wire enable,
  input wire din,
  output wire dout
);
  wire clk_buf_i;
  wire clk_clk_buf;
  wire i_ddr_d;
  wire o_ddr_d;
  wire o_buf_i;
  I_BUF clk_i_buf(
    .I(clk),
    .EN(1'b1),
    .O(clk_buf_i)
  );
  CLK_BUF clk_buf(
    .I(clk_buf_i),
    .O(clk_clk_buf)
  );
  I_BUF i_buf(
    .I(din),
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
    .Q(o_buf_i)
  );
  O_BUF o_buf(
    .I(o_buf_i),
    .O(dout)
  );

endmodule
