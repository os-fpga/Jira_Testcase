/////////////////////////////////////////
//  Functionality: flop to flop path
//  Author:        George Chen
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

            |------------------------------------|
            |                                    |
      din --|--> I_BUF                           |
            |                                    |
      clk --|--> I_BUF --> CLK_BUF               |
            |                                    |
            |                            O_BUF --|--> dout
            |                                    |
            |------------------------------------|                        

  SW Readiness:

      Yes. However Pin Table and RIC model need to be updated to support Clock-Capble IO

  Testing (Simulation/Emulator):

      Not Yet

*/

module flop2flop(
  din,
  dout,
  clk
);

  input din;
  input clk;
  output reg dout;
  reg q1;

  always @(posedge clk) begin
    q1 <= din ;
  end

  always @(posedge clk) begin 
    dout <= q1 ;
  end

endmodule
