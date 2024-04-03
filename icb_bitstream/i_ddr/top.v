/////////////////////////////////////////
//  Functionality: Recieves 2-bit DDR format data on posedge
//                 and negedge of clock, store it in flops for
//                 one cycle and then transmit it in SDR mode
//                 on two output lanes
//                 -- I_DDR
//  Author:        Azfar
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

            |------------------------------------|
            |                                    |
            |              |-------|-->          |
   data_i --|--> I_BUF --> | I_DDR |             |
            |              |-------|-->          |
  reset_n --|--> I_BUF                           |
            |                                    |
   enable --|--> I_BUF                           |
            |                                    |
    clk_i --|--> I_BUF                           |
            |                                    |
            |                                    |
            |                            O_BUF --|--> data_o
            |                                    |
            |                                    |
            |------------------------------------|

  SW Readiness:

    SYN:: Yes
    PPDB:: Yes
    BitGen:: No

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-17
*/

module top(
  input wire data_i,
  input wire reset_n,
  input wire enable,
  input wire clk_i,
  output reg [1:0] data_o
);
  wire [1:0] data_reg;
  wire data_i_buf;
  I_BUF i_buf(
    .I(data_i),
    .EN(1'b1),
    .O(data_i_buf)
  );
  I_DDR i_ddr(
    .D(data_i_buf),
    .R(reset_n),
    .E(enable),
    .C(clk_i),
    .Q(data_reg)
  );
  always @(posedge clk_i or negedge reset_n) begin
    if (!reset_n)
      data_o <= 0;
    else if (enable) begin
      data_o[0] <= data_reg[0];
      data_o[1] <= data_reg[1];
    end
  end

endmodule
