/////////////////////////////////////////
//  Functionality: flop to flop path
//                 - CLK_BUF
//  Author:        George Chen
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

          |------------------------------------|
          |                                    |
    clk --|--> I_BUF --> CLK_BUF               |
          |                                    |
    din --|--> I_BUF                           |
          |                                    |
          |                            O_BUF --|--> dout
          |                                    |
          |------------------------------------|

  SW Readiness:

    Yes. However Pin Table and RIC model need to be updated to support
      Clock-Capble IO

  Testing (Simulation/Emulator):

    Not Yet

  Source:

    GJC-1
*/

module top (
  input clk,
  input din,
  output reg dout
);
  reg q1;
  always @(posedge clk) begin
    q1 <= din;
  end
  always @(posedge clk) begin
    dout <= q1;
  end
endmodule
