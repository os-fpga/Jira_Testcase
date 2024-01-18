module dsp_test;
reg [17:0] B; wire [37:0] Z; reg rst; wire [17:0] extra;
reg [19:0] A; reg clk; reg [2:0] feed;
DSP38 #(
    .COEFF_0(20'd20),
    .COEFF_1(20'd40),
    .COEFF_2(20'd60),
    .COEFF_3(20'd80),
    .DSP_MODE("MULTIPLY_ACCUMULATE"),
    .OUTPUT_REG_EN("FALSE"),
    .INPUT_REG_EN("FALSE")
) DSP38(
    .A(A),
    .B(B),
    .ACC_FIR(6'd0),
    .Z(Z),
    .DLY_B(extra),
    .CLK(clk),
    .RESET(rst),
    .FEEDBACK(feed),
    .LOAD_ACC(1'b1),
    .SATURATE(1'b0),
    .SHIFT_RIGHT(6'd0),
    .ROUND(1'b0),
    .SUBTRACT(1'b0),
    .UNSIGNED_A(1'b1),
    .UNSIGNED_B(1'b1)
);
initial begin
    rst = 1'b1;
    # 20;
    rst = 1'b0;
    feed = 3'b100;
    B = 18'd20;
    # 50;
    B = 18'd40;
    # 50;
    A = 20'd20;
    # 50;
    feed = 3'b101;
    B = 18'd20;
    #50;
    B = 18'd40;
    #50;
    feed = 3'b110;    
    B = 18'd20;
    # 50;
    B = 18'd40;
    # 50;
    feed = 3'b111;
    B = 18'd20;
    # 50;
    B = 18'd40;
    
    # 100;
    $finish;
end

initial begin
    clk = 1'b1;
    forever #5 clk = ~clk;
end

initial begin
    $dumpfile("dsp.vcd");
    $dumpvars;
end
endmodule
