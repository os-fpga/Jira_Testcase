/////////////////////////////////////////
//  Functionality: Recieves 2-bit parallel SDR data on posedge  
//                 of clock, store it in flops for one cycle and
//                 then transmit it in DDR mode
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
                      |               O_DDR --> O_DELAY --> O_BUF --|--> data_o
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
  input wire [1:0] data_i,
  input wire reset_n,
  input wire enable,
  input wire dly_inc_pulse_inv,
  output reg data_o
);
  reg [1:0] data_reg;
  wire data_o_buf, data_o_delayed;
  reg dly_ld;
  wire dly_adj, dly_incdec;
  assign dly_adj = ~dly_inc_pulse_inv;
  assign dly_incdec = ~dly_inc_pulse_inv;
  
  always @(posedge clk_i) begin
    if (!reset_n) begin
      data_reg <= 0;
      dly_ld <= 1;
    end else if(enable) begin
      data_reg <= data_i;
      dly_ld <= 0;
    end
  end
  O_DDR data_o_ddr(
    .D(data_reg),
    .R(reset_n),
    .E(enable),
    .C(clk_i),
    .Q(data_o_delayed)
  );
  O_DELAY data_o_delay(
    .I(data_o_delayed), 
    .DLY_LOAD(dly_ld), 
    .DLY_ADJ(dly_adj), 
    .DLY_INCDEC(dly_incdec), 
    .CLK_IN(clk_i), 
    .O(data_o_buf)
  );
  O_BUF ddr_buf(
    .I(data_o_buf),
    .O(data_o)
  );
endmodule
