/////////////////////////////////////////
//  Functionality: Recieves 2-bit DDR format data on posedge  
//                 and negedge of clock, store it in flops for
//                 one cycle and then transmit it in SDR mode
//                 on two output lanes
//  Author:        Azfar
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

                      |---------------------------------------------|
                      |                                             |
              clk_i --|--> I_BUF --> CLK_BUF                        |
                      |                                             |
             data_i --|--> I_BUF --> I_DELAY --> I_DDR              |
                      |                                             |
            reset_n --|--> I_BUF                                    |
                      |                                             |
             enable --|--> I_BUF                                    |
                      |                                             |
  dly_inc_pulse_inv --|--> I_BUF                                    |
                      |                                             |
                      |                                     O_BUF --|--> data_o
                      |                                             |
                      |---------------------------------------------|

  SW Readiness:

    SYN:: Yes
    PPDB:: Yes
    BitGen:: No

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-20
*/

module i_delay_o_buf (
  input wire clk_i,
  input wire data_i,
  input wire reset_n,
  input wire enable,
  input wire dly_inc_pulse_inv,
  output reg [1:0] data_o
);
  wire [1:0] data_reg;
  wire data_i_buf, data_i_buf_delayed;
  reg dly_ld;
  wire dly_adj, dly_incdec;

  assign dly_adj = ~dly_inc_pulse_inv;
  assign dly_incdec = ~dly_inc_pulse_inv;

  I_BUF data_buf(
    .I(data_i),
    .EN(enable),
    .O(data_i_buf)
  );
  I_DELAY data_i_delay(
    .I(data_i_buf),
    .DLY_LOAD(dly_ld),
    .DLY_ADJ(dly_adj),
    .DLY_INCDEC(dly_incdec),
    .CLK_IN(clk_i),
    .O(data_i_buf_delayed)
  );
  I_DDR data_i_ddr(
    .D(data_i_buf_delayed), 
    .R(reset_n),
    .E(enable), 
    .C(clk_i), 
    .Q(data_reg)
  );
  always @(posedge clk_i) begin
    if(!reset_n) begin
      data_o <= 0;
      dly_ld <= 1;
    end else if(enable) begin
      data_o[0] <= data_reg[0];
      data_o[1] <= data_reg[1];
      dly_ld <= 0;
    end
  end
endmodule
