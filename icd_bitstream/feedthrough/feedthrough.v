/////////////////////////////////////////
//  Functionality: feedthrough path
//  Author:        George Chen
////////////////////////////////////////
// `timescale 1ns / 1ps

/*
  Primitive Description:

            |------------------------------------|
            |                                    |
      din --|--> I_BUF                           |
            |                                    |
            |                            O_BUF --|--> dout
            |                                    |
            |------------------------------------|                        

  SW Readiness:

      Yes

  Testing (Simulation/Emulator):

      Not Yet

*/

module feedthrough(
  din, 
  dout
);

  input din;
  output dout;

  assign dout = din ;

endmodule
