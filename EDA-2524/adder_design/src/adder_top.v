`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/19/2024 11:47:48 AM
// Design Name: 
// Module Name: adder_top
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module adder_top(
input [4-1 : 0]a,
input [4-1 : 0]b,
output [4-1 :0]c

    );
    
N_bit_adder #(
.M(4)
) N_bit_adder_inst (
        .input1(a),
        .input2(b),
        .answer(c)
      );
      
endmodule
