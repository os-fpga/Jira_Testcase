//-------------------------------------------------------
//  Functionality: An n-bit signed adder and subtractor 
//  Author:        Azfar 
//-------------------------------------------------------
`define ADD_SUB_DATA_WIDTH 64


module add_sub_signed(
    input wire mode, // mode 0 (add) mode 1 (sub)
    input wire signed [`ADD_SUB_DATA_WIDTH - 1:0] operand_a,
    input wire signed [`ADD_SUB_DATA_WIDTH - 1:0] operand_b,
    output wire signed [`ADD_SUB_DATA_WIDTH   :0] output_c
);
   
    assign output_c = (mode)? operand_a-operand_b:operand_a+operand_b;

endmodule
