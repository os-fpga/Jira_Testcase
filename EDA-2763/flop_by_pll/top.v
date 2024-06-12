module top(
	input wire clk,
  input wire [7:0] din,
	output reg [7:0] dout
);
  wire [7:0] pllclk;
  PLL #(
    .DIVIDE_CLK_IN_BY_2("FALSE"),
    .PLL_MULT(16),
    .PLL_DIV(1),
    .PLL_POST_DIV(34)
  ) pll_pin (
    .PLL_EN(1'b1),
    .CLK_IN(clk),
    .CLK_OUT(pllclk[0]),
    .CLK_OUT_DIV2(pllclk[1]),
    .CLK_OUT_DIV3(pllclk[2]),
    .CLK_OUT_DIV4(pllclk[3])
  );
  wire osc;
  BOOT_CLOCK boot_clock(
    .O(osc)
  );
  PLL #(
    .DIVIDE_CLK_IN_BY_2("TRUE"),
    .PLL_MULT(16),
    .PLL_DIV(2),
    .PLL_POST_DIV(34)
  ) pll_osc (
    .PLL_EN(1'b1),
    .CLK_IN(osc),
    .CLK_OUT(pllclk[4]),
    .CLK_OUT_DIV2(pllclk[5]),
    .CLK_OUT_DIV3(pllclk[6]),
    .CLK_OUT_DIV4(pllclk[7])
  );
  genvar i;
  generate
    for (i = 0; i < 8; i = i + 1) begin
      always @ (posedge pllclk[i]) begin
        dout[i] <= din[i];
      end
    end
  endgenerate

endmodule
