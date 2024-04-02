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
    wire clk_i_buf;

    CLK_BUF clock_buffer (.I(clk), .O(clk_i_buf));

    always @(posedge clk_i_buf) begin
        if(enable)data_o <= data_i;
    end

endmodule