//***********************************************************
// Functionality: Alternating 10 generated is delayed and sent out,
//                also a non delayed version of same data is sent
//                out for reference. Using inverted control signals,
//                delay can be adjusted accordingly
// Author:        Azfar  
//***********************************************************



module o_delay_o_buft_ds (
    input wire clk_i,
    input wire dly_incdec,
    input wire dly_ld,
    input wire dly_adj,
    output wire data_o_delayed_p,
    output wire data_o_delayed_n,
    output wire data_o_ref,
    output wire [5:0] dly_tap_val_inv
);

    reg test_data;
    wire dly_adj_inv, dly_incdec_inv, dly_ld_inv;
    wire data_o_delayed_buf;
    wire [5:0] dly_tap_val;
    wire clk_buf_i;
    wire const1;

    CLK_BUF clock_buffer (clk_i,clk_buf_i);

    always @(clk_buf_i) begin
        if(clk_buf_i)test_data <= 1;
        else test_data <= 0;
    end
    assign const1           = 1;
    assign data_o_ref       = test_data;
    assign dly_adj_inv      = ~dly_adj;
    assign dly_incdec_inv   = ~dly_incdec;
    assign dly_ld_inv       = ~dly_ld;
    assign dly_tap_val_inv  = ~dly_tap_val;

    O_BUFT_DS #(.WEAK_KEEPER("PULLUP")) data_buf (.I(data_o_delayed_buf),.T(const1),.O_P(data_o_delayed_p),.O_N(data_o_delayed_n));
    O_DELAY data_o_delay (  .I(test_data), 
                            .DLY_LOAD(dly_ld_inv), 
                            .DLY_ADJ(dly_adj_inv), 
                            .DLY_INCDEC(dly_incdec_inv), 
                            .CLK_IN(clk_buf_i), 
                            .DLY_TAP_VALUE(dly_tap_val),
                            .O(data_o_delayed_buf));
endmodule