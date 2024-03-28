module pll_inferring_clk_buf (
    input wire clk_in,
    input wire reset,
    output wire output1,
    output wire output2,
    output wire output3,
    output wire output4,
    output wire output5
);

    wire clk_ibuf, clk_buf, pll_clk, clk_out_div2, clk_out_div3, clk_out_div4, serdes_fast_clk, lock, reset_ibuf;
    reg out1, out2, out3, out4, out5;

    I_BUF # (.WEAK_KEEPER("NONE")) clk_IBUF   (.I(clk_in), .EN(1'b1), .O(clk_ibuf)); // Input Buffer
    I_BUF # (.WEAK_KEEPER("NONE")) reset_IBUF (.I(reset), .EN(1'b1), .O(reset_ibuf)); // Input Buffer

    CLK_BUF clk_BUF (.I(clk_ibuf), .O(clk_buf));    // Clock Buffer

    // Output Buffers
	O_BUF output1_obuf (.I(out1), .O(output1));
    O_BUF output2_obuf (.I(out2), .O(output2));
    O_BUF output3_obuf (.I(out3), .O(output3));
    O_BUF output4_obuf (.I(out4), .O(output4));
    O_BUF output5_obuf (.I(out5), .O(output5));

    // PLL Instantiation
    PLL # (
        .DIVIDE_CLK_IN_BY_2("FALSE"),
        .PLL_MULT(7'd64),
        .PLL_DIV(2'd2),
        .PLL_POST_DIV(6'd32)
    ) PLL (
        .PLL_EN(1'b1),
        .CLK_IN(clk_buf),
        .CLK_OUT(pll_clk),
        .CLK_OUT_DIV2(clk_out_div2),
        .CLK_OUT_DIV3(clk_out_div3),
        .CLK_OUT_DIV4(clk_out_div4),
        .SERDES_FAST_CLK(serdes_fast_clk),
        .LOCK(lock)
    );

    always@(posedge pll_clk) begin
        if (reset_ibuf) begin
            out1 <= 1'b0;
        end else begin
            out1 <= 1'b1;
        end
    end

    always@(posedge clk_out_div2) begin
        if (reset_ibuf) begin
            out2 <= 1'b0;
        end else begin
            out2 <= 1'b1;
        end
    end

    always@(posedge clk_out_div3) begin
        if (reset_ibuf) begin
            out3 <= 1'b0;
        end else begin
            out3 <= 1'b1;
        end
    end

    always@(posedge clk_out_div4) begin
        if (reset_ibuf) begin
            out4 <= 1'b0;
        end else begin
            out4 <= 1'b1;
        end
    end

    always@(posedge serdes_fast_clk) begin
        if (reset_ibuf) begin
            out5 <= 1'b0;
        end else begin
            out5 <= 1'b1;
        end
    end
endmodule
