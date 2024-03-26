//***********************************************************
// Functionality: Recieves 2-bit parallel SDR data on posedge  
//                of clock, store it in flops for one cycle and
//                then transmit it in DDR mode
// Author:        Azfar  
//***********************************************************



module sdr_to_o_ddr_o_delay_o_buf (
    input   wire [1:0] data_i,
    input   wire reset_n,
    input   wire enable,
    input   wire dly_inc_pulse_inv,
    input   wire clk_i,
    output  wire data_o
);

    reg [1:0] data_reg;
    wire data_o_buf, data_o_delayed;
    reg dly_ld;
    wire dly_adj, dly_incdec;

    assign dly_adj    = ~dly_inc_pulse_inv;
    assign dly_incdec = ~dly_inc_pulse_inv;

    O_BUF ddr_buf (data_o_buf,data_o);
    O_DELAY data_o_delay (  .I(data_o_delayed), 
                            .DLY_LOAD(dly_ld_inv), 
                            .DLY_ADJ(dly_adj_inv), 
                            .DLY_INCDEC(dly_incdec_inv), 
                            .CLK_IN(clk_i), 
                            .O(data_o_buf));
    O_DDR data_o_ddr (data_reg,reset_n,enable,clk_i,data_o_delayed);

    always @(posedge clk_i) begin
        if(!reset_n) begin
            data_reg <= 0;
            dly_ld   <= 1;
        end else if(enable) begin
            data_reg[0] <= data_i[0];
            data_reg[1] <= data_i[1];
            dly_ld      <= 0;
        end
    end
endmodule