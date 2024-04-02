/////////////////////////////////////////
//  Functionality: Recieves 2-bit parallel SDR data on posedge
//                 of clock, store it in flops for one cycle and
//                 then transmit it in DDR mode
//                 -- O_DDR
//  Author:        Azfar
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

            |------------------------------------|
            |                                    |
   data_i --|--> I_BUF                           |
            |                                    |
  reset_n --|--> I_BUF                           |
            |                                    |
   enable --|--> I_BUF                           |
            |                                    |
    clk_i --|--> I_BUF                           |
            |                                    |
            |            -->|-------|            |
            |               | O_DDR |--> O_BUF --|--> data_o
            |            -->|-------|            |
            |                                    |
            |------------------------------------|

  SW Readiness:

    Not Yet

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-16
*/

module top(
  input wire [1:0] data_i,
  input wire reset_n,
  input wire enable,
  input wire clk_i,
  output wire data_o
);

  reg [1:0] data_reg;
  wire data_o_buf;
  always @(posedge clk_i or negedge reset_n) begin
    if (!reset_n)
      data_reg <= 0;
    else if (enable) begin
      data_reg[0] <= data_i[0];
      data_reg[1] <= data_i[1];
    end
  end
  O_DDR o_ddr(
    data_reg,
    reset_n,
    enable,
    clk_i,
    data_o_buf
  );
  O_BUF o_buf(
    data_o_buf,
    data_o
  );
endmodule
