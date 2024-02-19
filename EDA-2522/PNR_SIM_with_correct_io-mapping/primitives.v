`timescale 1ns/1ps


//K-input Look-Up Table
module LUT_K #(
    //The Look-up Table size (number of inputs)
    parameter K = 1, 

    //The lut mask.  
    //Left-most (MSB) bit corresponds to all inputs logic one. 
    //Defaults to always false.
    parameter LUT_MASK={2**K{1'b0}} 
) (
    input [K-1:0] in,
    output out
);

 
    assign out = LUT_MASK[in];

endmodule

//Routing fpga_interconnect module
module fpga_interconnect(
    input datain,
    output dataout
);



    assign dataout = datain;

endmodule

