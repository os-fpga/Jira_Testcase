//***********************************************************
// Functionality: Recieves 2-bit parallel SDR data on posedge  
//                of clock, store it in flops for one cycle and
//                then transmit it in DDR mode
// Author:        Azfar  
//***********************************************************



module o_ddr_o_buf_ds (
    input   wire [1:0] data_i,
    input   wire reset_n,
    input   wire enable,
    input   wire clk_i,
    output  wire data_o_p
    output  wire data_o_n
);

    reg [1:0] data_reg;
    wire data_o_buf;
    wire clk_buf_i;

    CLK_BUF clock_buffer (clk_i, clk_buf_i);

    O_BUF_DS ddr_buf (.I(data_o_buf), .O_P(data_o_p), .O_N(data_o_n));
    
    O_DDR data_o_ddr (data_reg,reset_n,enable,clk_buf_i,data_o_buf);

    always @(posedge clk_buf_i or negedge reset_n) begin
        if(!reset_n) data_reg <= 0;
        else if(enable) begin
            data_reg[0] <= data_i[0];
            data_reg[1] <= data_i[1];
        end
    end
endmodule