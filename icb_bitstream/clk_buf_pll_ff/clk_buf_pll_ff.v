//***********************************************************
// Functionality: Flip FLop design with clk pin constrained 
//                to CCRIO pad 
// Author:        Azfar 
//***********************************************************


module clk_buf_pll_ff (
    input  wire data_i,
    input wire clk,
    input  wire enable,
    output wire data_o
);
    wire clk_i_buf;
    wire const1;
    wire pll_clk_div4;

    assign const1 = 1;

    CLK_BUF clock_buffer (.I(clk), .O(clk_i_buf));
    
    custom_dff flip_flop(.d(data_i), .c(pll_clk_div4), .e(enable), .q(data_o));

    PLL #(.PLL_MULT(16), .PLL_DIV(1), .PLL_POST_DIV(2)) clk_pll_gen (
        .PLL_EN(const1), // PLL Enable
        .CLK_IN(clk_i_buf), // Clock input
        .CLK_OUT_DIV4(pll_clk_div4)
        );

endmodule


module custom_dff(
    input wire d,
    input wire c,
    input wire e,
    output reg q
);
    always @(posedge c) begin
        if(e)q <= d;
    end
endmodule