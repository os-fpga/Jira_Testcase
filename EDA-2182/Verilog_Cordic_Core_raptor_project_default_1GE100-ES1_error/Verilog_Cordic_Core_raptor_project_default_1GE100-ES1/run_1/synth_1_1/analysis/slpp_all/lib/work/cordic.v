/*  file:        cordic.v
    author:      Dale Drinkard
    release:     08/06/2008
    
    brief:

    First Quadrant CORDIC
    
    This is a self contained, configurable CORDIC generator
    The user can modify the `defines below to customize the code generation.
    This code is for the first quadrant, but is easily extended to the full
    circle by first doing a coarse rotation.  For example, to compute the
    arctan of -y/x, in the second quadrant, feed the cordic function y/x and
    then add 90 degrees (or pi/2 if using radian mode) to the result.  When
    computing sin and cos of an angle, coarse rotate the angle into the first quadrant
    by subtracting the appropriate number of 90 (or pi/2) increments to get the angle in
    the first quadrant, keep track of this value, feed the cordic the angle.  Then
    simply change the sign of the results based on this stored number.
    
    To use the core comment/uncomment the `defines below.  The user can change the number
    of bits that represent the x,y, and theta values.  The core can operate in either radian
    or degree mode. 
    **NOTE** Even though there are allowances for changeing many parameters of the code, it is
    strongly advised that the user understand the CORDIC algorythm before monkeying with these
    settings.  By default, the core uses 16+sign (17 bit) numbers for x,y, and theta, and iterates 16
    times in the algorythm.  There are two arctan function tables,one for radian and one for degree
    mode.  If more iterations or higher precision calculations are desired then a new arctan table will
    need to be computed.


    The core will operate in one
    of two modes:
    
        
    ROTATE:  In this mode the user supplies a X and Y cartesian vector and an angle.  The
             CORDIC rotator seeks to reduce the angle to zero by rotating the vector.
             
             To compute the cos and sin of the angle, set the inputs as follows:
             
             y_in = 0;
             x_in = `CORDIC_1
             theta_in = the input angle
             
             on completion:
             
             y_out = sin
             x_out = cos
             
             The `CORDIC_1 above is the inverse of the cordic gain... or ~0.603
             The input angle depends on whether you build in radian or degree mode
             see the description of the `defines below.


    VECTOR:  In this mode the user supplies the tangent value in x and y and the rotator
             seeks to minimize the y value, thus computing the angle.
             
             To compute the arctan set the inputs as follows
             
             y_in and x_in  such that y/x = the tangent value for which you wish to find the angle
             theta_in = 0;
             
             on completion
             
             theta_out = the angle
             
             

*/

/* data valid flag

   The iterative CORDIC implementations take a predetermined number of clock cycles to complete
   If the VALID_FLAG is defined the core instantiates a dvalid_in and dvalid_out signal.  This
   signal makes no sense in the COMBINATORIAL mode.
*/
// `define VALID_FLAG

/*  Angle mode
  
  The CORDIC can work with the angle expressed in radians or degrees
  Uncomment the appropriate `define below.
  RADIAN_16 uses 16 bit values (+ sign bit for 17 bit accuracy).  angle information
  is in the format U(1,15) where bit 16 is the sign bit, bit 15 is the whole number part
  and bits [14:0] are the fractional parts.
  DEGREE_8_8 uses U(8,8) + a sign bit where bit 16 = the sign bit, [15:8] = the whole number part
  and [7:0] = the fractional.
  
  The user can define other formats by creating a new tanangle function
*/
// `define DEGREE_8_8


/*  Bit accuracy for sin and cos

  The X and Y values are computed using a `XY_BITS + sign bit accuracy.  The format is assumed to be U(1,15) + sign bit
  However, the CORDIC algorythm really doesn't care.
*/


/*  Bit accuracy for theta

  The angle can be represented in either degree or radians.  This define determines the number of bits used to represent the
  angle.  Going to a higher number of bits would allow more iterations thus improving accuracy.  16 bits is enough for
  most applications.
*/


/*  Iteration accuracy

  This is the number of times the algorithm will iterate.  For pipelined options, this is the number of stages.
  This number is <= the number of bits used in the angles
  
*/



/* Implementation options

  The CORDIC core can be realized in one of three methods:
  ITERATE:  This option builds a single ROTATOR.  The user provides the arguments and gives the core ITERATIONS
            clock cycles to get the result.  A signal named init is instantiated to load the input values.  It uses the
            least amount of LUTs
  PIPELINE: This option can take a new input on every clock and gives results ITERATIONS clock cycles later. It uses the
            most amount of LUTS.
  COMBINATORIAL:  This option gives a result in a single clock cycle at the expense of very deep logic levels.  The
                  combinatorial implementation runs at about 10 mhz while the iterative ones run at about 125 in a
                  Lattice ECP2 device.
*/
//`define ITERATE

//`define COMBINATORIAL

/* CORDIC function
   The CORDIC core works in one of two methods:  VECTOR and ROTATE.
   VECTOR:  This mode seeks to reduce the Y values and is used to compute an angle given a point.
            Enter the sin and cos of the desired angle and the core calculates the angle.  This
            mode computes ARCTAN.
   ROTATE:  This mode seeks to reduce the angle.  It can be used to compute the sin and cos of a given angle
*/
//`define VECTOR     // computes the arctan and square root
 


/* CORDIC GAIN
  The CORDIC algorithm has an associated gain that is:
  
  CORDIC_gain = for (i=0;i<n;i++) An = An*SQRT(1+(1/2^2i)
  This quickly converges to ~ 1.647 as i goes to infinity.
  For 16 bit numbers in the U(1,15) the value is 17'd53955
  *** NOTE *** If you change the number representations
               you will have to recompute these values.
*/




//====================   DO NOT EDIT BELOW THIS LINE ======================









/*  Signed shifter
  This module does an arbitrary right shift to implement'
  the 1/2^i function on signed numbers
*/
module signed_shifter (
  input wire [4  -1:0] i,
  input wire signed [16:0] D,
  output reg signed [16:0] Q );
  integer j;
  always @ * begin
    Q = D;
    for(j=0;j<i;j=j+1) Q = (Q >> 1) | (D[16] << 16);
  end
endmodule
/*  Rotator
  This module is the heart of the CORDIC computer and implements the CORDIC algorithm.
  Input values x_i, y_i, and z_i are micro computed based on the iteration step
  and the arctan of that step.  See the description of the CORDIC algorithm for details.
  
*/
module rotator (
  input wire clk,
  input wire rst,





  input wire signed  [16:0]    x_i,
  input wire signed  [16:0]    y_i,
  input wire signed  [16:0] z_i,
  output wire signed [16:0]    x_o,
  output wire signed [16:0]    y_o,
  output wire signed [16:0] z_o
  );
  

  parameter integer iteration = 0;
  parameter signed [16:0] tangle = 0;

  reg signed [16:0] x_1;
  reg signed [16:0] y_1;
  reg signed [16:0] z_1;
  wire signed [16:0] x_i_shifted;
  wire signed [16:0] y_i_shifted;
  signed_shifter x_shifter(iteration,x_i,x_i_shifted);
  signed_shifter y_shifter(iteration,y_i,y_i_shifted);







  always @ (posedge clk)

    if (rst) begin
      x_1 <= 0;
      y_1 <= 0;
      z_1 <= 0;
    end else begin








      if (z_i < 0) begin




        x_1 <= x_i + y_i_shifted; //shifter(y_1,i); //(y_1 >> i);
        y_1 <= y_i - x_i_shifted; //shifter(x_1,i); //(x_1 >> i);
        z_1 <= z_i + tangle;
      end else begin
        x_1 <= x_i - y_i_shifted; //shifter(y_1,i); //(y_1 >> i);
        y_1 <= y_i + x_i_shifted; //shifter(x_1,i); //(x_1 >> i);
        z_1 <= z_i - tangle;
      end
    end
  assign x_o = x_1;
  assign y_o = y_1;
  assign z_o = z_1;
endmodule
/*                 
                     CORDIC
                     
*/
module cordic (
  input wire clk,
  input wire rst,



  input wire signed [16:0]    x_i,
  input wire signed [16:0]    y_i,
  input wire signed [16:0] theta_i,
  
  output wire signed [16:0]    x_o,
  output wire signed [16:0]    y_o,
  output wire signed [16:0] theta_o


  
);


/*
  arctan table in radian format  16 bit + sign bit.
*/
function [16:0] tanangle;
  input [3:0] i;
  begin
    case (i)
    4'b0000: tanangle = 17'd25735 ;   //  1/1
    4'b0001: tanangle = 17'd15192;    //  1/2
    4'b0010: tanangle = 17'd8027;     //  1/4
    4'b0011: tanangle = 17'd4075;     //  1/8
    4'b0100: tanangle = 17'd2045;     //  1/16
    4'b0101: tanangle = 17'd1024;     //  1/32
    4'b0110: tanangle = 17'd512;      //  1/64
    4'b0111: tanangle = 17'd256;      //  1/128
    4'b1000: tanangle = 17'd128;      //  1/256
    4'b1001: tanangle = 17'd64;       //  1/512
    4'b1010: tanangle = 17'd32;       //  1/1024
    4'b1011: tanangle = 17'd16;       //  1/2048
    4'b1100: tanangle = 17'd8;        //  1/4096
    4'b1101: tanangle = 17'd4;        //  1/8192
    4'b1110: tanangle = 17'd2;        //  1/16k
    4'b1111: tanangle = 17'd1;        //  1/32k
    endcase
  end
endfunction































  wire signed [16:0] x [16-1:0];
  wire signed [16:0] y [16-1:0];
  wire signed [16:0] z [16-1:0];
  assign x[0] = x_i;
  assign y[0] = y_i;
  assign z[0] = theta_i;
  assign x_o = x[16-1];
  assign y_o = y[16-1];
  assign theta_o = z[16-1];














genvar i;
generate for(i=0;i<16-1;i=i+1) begin
  rotator U (clk,rst,x[i],y[i],z[i],x[i+1],y[i+1],z[i+1]);
  defparam U.iteration = i;
  defparam U.tangle = tanangle(i);
end 
endgenerate













endmodule


