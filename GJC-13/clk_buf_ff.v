//***********************************************************
// Functionality: Flip FLop design with clk pin constrained 
//                to CCRIO pad 
// Author:        Azfar 
//***********************************************************


module clk_buf_ff(
    input  wire data_i,
    input wire clk,
    input  wire enable,
    output reg data_o
);
    always @(posedge clk) begin
        if(enable)data_o <= data_i;
    end

endmodule