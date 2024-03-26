//***********************************************************
// Functionality: Recieves 2-bit DDR format data on posedge  
//                and negedge of clock, store it in flops for
//                one cycle and then transmit it in SDR mode
//                on two output lanes
// Author:        Azfar  
//***********************************************************



module i_buf_i_delay_i_ddr_to_sdr (
    input   wire data_i,
    input   wire reset_n,
    input   wire enable,
    input   wire clk_i,
    input   wire dly_inc_pulse_inv,
    output  reg  [1:0] data_o
);

    wire [1:0] data_reg;
    wire data_i_buf, data_i_buf_delayed;
    reg dly_ld;
    wire dly_adj, dly_incdec;

    assign dly_adj    = ~dly_inc_pulse_inv;
    assign dly_incdec = ~dly_inc_pulse_inv;

    I_BUF data_buf (data_i,enable,data_i_buf);
    I_DELAY data_i_delay (  .I(data_i_buf),
                            .DLY_LOAD(dly_ld),
                            .DLY_ADJ(dly_adj),
                            .DLY_INCDEC(dly_incdec),
                            .CLK_IN(clk_i),
                            .O(data_i_buf_delayed));
    I_DDR data_i_ddr (data_i_buf_delayed, reset_n, enable, clk_i, data_reg);

    always @(posedge clk_i) begin
        if(!reset_n) begin
            data_o <= 0;
            dly_ld <= 1;
        end else if(enable) begin
            data_o[0] <= data_reg[0];
            data_o[1] <= data_reg[1];
            dly_ld    <= 0;
        end
    end

endmodule