//***********************************************************
// Functionality: Recieves 2-bit DDR format data on posedge  
//                and negedge of clock, store it in flops for
//                one cycle and then transmit it in SDR mode
//                on two output lanes
// Author:        Azfar  
//***********************************************************



module i_buf_i_ddr (
    input   wire data_i,
    input   wire reset_n,
    input   wire enable,
    input   wire clk_i,
    output  reg  [1:0] data_o
);

    wire [1:0] data_reg;
    wire data_i_buf;
    wire const1;
    wire clk_buf_i;

    assign const1 = 1;

    CLK_BUF clock_buffer (clk_i, clk_buf_i);

    I_BUF #(.WEAK_KEEPER("PULLDOWN")) data_buf (data_i,const1,data_i_buf);

    I_DDR data_i_ddr (data_i_buf, reset_n, enable, clk_buf_i, data_reg);

    always @(posedge clk_buf_i or negedge reset_n) begin
        if(!reset_n) data_o <= 0;
        else if(enable) begin
            data_o[0] <= data_reg[0];
            data_o[1] <= data_reg[1];
        end
    end

endmodule