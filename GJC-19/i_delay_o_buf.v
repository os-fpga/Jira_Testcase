//***********************************************************
// Functionality: Input is delayed according to controls then 
//                inverted and sent out through output buffer
// Author:        Azfar  
//***********************************************************



module i_delay_o_buf (
    input wire clk_i,
    input wire data_i,
    input wire dly_incdec,
    input wire dly_ld,
    input wire dly_adj,
    output wire data_o_inv_delayed,
    output wire [5:0] dly_tap_val_inv
);

    wire data_o;
    wire [5:0] dly_tap_val;
    wire dly_incdec_inv, dly_adj_inv, dly_ld_inv;
    wire enable;
    wire data_i_buf;

    assign data_o_inv_delayed   = ~data_o;
    assign enable               = 1;
    assign dly_incdec_inv       = ~dly_incdec;
    assign dly_adj_inv          = ~dly_adj;
    assign dly_ld_inv           = ~dly_ld;
    assign dly_tap_val_inv      = ~dly_tap_val;

    I_BUF data_buf (data_i,enable,data_i_buf);
    I_DELAY data_i_delay (  .I(data_i_buf),
                            .DLY_LOAD(dly_ld_inv),
                            .DLY_ADJ(dly_adj_inv),
                            .DLY_INCDEC(dly_incdec_inv),
                            .DLY_TAP_VALUE(dly_tap_val),
                            .CLK_IN(clk_i),
                            .O(data_o));
endmodule