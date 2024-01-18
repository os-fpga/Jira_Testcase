/////////////////////////////////////////
//  Functionality: flop to flop path
//  Author:        George Chen
////////////////////////////////////////
// `timescale 1ns / 1ps


module flop1( clk, din, q1 );
   input din;
   input clk;
   output reg q1;
   
always @(posedge clk)
    begin
      q1 <= din ;
	end

endmodule // flop1

module flop2( clk, q1, dout );
   input clk;

   input q1;
   output reg dout;
   
   
always @(posedge clk)
    begin
      dout <= q1 ;
	end

endmodule // flop2

module flop2flop(
  din,
  dout_north,
  dout_south,
  dout_east,
  dout_west,
  clk);

   flop1 center (.clk(clk), .din(din), .q1(q1) );
   flop2 north (.clk(clk), .q1(q1), .dout(dout_north) );
   flop2 south (.clk(clk), .q1(q1), .dout(dout_south) );
   flop2 east (.clk(clk), .q1(q1), .dout(dout_east) );
   flop2 west (.clk(clk), .q1(q1), .dout(dout_west) );

endmodule
