module dsp_test;
reg [19:0] a;
reg [17:0] b;
wire [37:0] z, Z;
wire [18:0] z2, z1;
reg clk1;
// RS_DSP_MULT #(
//     .MODE_BITS({{80{1'b0}}, 1'b1})
// ) frac(.a(a), .b(b), .z(z), .unsigned_a(1'b1), .unsigned_b(1'b1), .feedback(1'd0));
DSP19X2 #(
    .DSP_MODE("MULTIPLY"),
    .OUTPUT_REG_EN("FALSE"),
    .INPUT_REG_EN("FALSE")
    )
    dsp_rtl(
    .A1(a[9:0]),
    .A2(a[19:10]),
    .B1(b[8:0]),
    .B2(b[17:9]),
    .Z1(z[18:0]),
    .Z2(z[37:19]),
    .DLY_B1(),
    .CLK(),
    .RESET(),
    .ACC_FIR(),
    .FEEDBACK(3'd0),
    .LOAD_ACC(),
    .UNSIGNED_A(1'b1),
    .UNSIGNED_B(1'b1),
    .SATURATE_ENABLE(),
    .SHIFT_RIGHT(),
    .ROUND(),
    .SUBTRACT(),
    .DLY_B2()
    );

DSP19X2_model #(
    .DSP_MODE("MULTIPLY"),
    .OUTPUT_REG_EN("FALSE"),
    .INPUT_REG_EN("FALSE")
    )
    dsp_model(
    .A1(a[9:0]),
    .A2(a[19:10]),
    .B1(b[8:0]),
    .B2(b[17:9]),
    .Z1(Z[18:0]),
    .Z2(Z[37:19]),
    .DLY_B1(),
    .CLK(),
    .RESET(),
    .ACC_FIR(),
    .FEEDBACK(3'd0),
    .LOAD_ACC(),
    .UNSIGNED_A(1'b1),
    .UNSIGNED_B(1'b1),
    .SATURATE(),
    .SHIFT_RIGHT(),
    .ROUND(),
    .SUBTRACT(),
    .DLY_B2()
    );
dsp1 dut1(.a(a[9:0]),.b(b[8:0]),.z(z1));
dsp1 dut2(.a(a[19:10]),.b(b[17:9]),.z(z2));
integer mismatch = 0;
initial 
begin
clk1 = 1'b1;
forever #5 clk1 = ~clk1;
end

initial
begin
for (integer i=0; i<500; i=i+1)
begin
if(i == 0) begin
    a <= {20{1'b1}};
    b <= {20{1'b1}};
end
else if (i == 1) begin
    a <= {20{1'b0}};
    b <= {20{1'b0}};
end
else begin
    a <= $random;
    b <= $random;
end
repeat (1) @ (posedge clk1);
compare();
end
if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\n**** Simulation Passed ****");
    else
        $display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);

end

task compare();
    if(z[18:0] !== z1) begin
        $display("mismatch. z[18:0]: %0h, z1: %0h, Time: %0t", z[18:0], z1,$time);
        mismatch = mismatch+1;
    end
    if (z[37:19] !== z2) begin
        $display("mismatch. z[37:19]: %0h, z2: %0h, Time: %0t", z[37:19], z2,$time);
        mismatch = mismatch+1;
    end
    if (z!== Z) begin
        $display("mismatch. z: %0h, Z: %0h, Time: %0t", z, Z,$time);
        mismatch = mismatch+1;
    end
endtask

initial begin
    $dumpfile("dsp.vcd");
    $dumpvars;
    #20000;
    $finish;
end
endmodule

module dsp1(a, b, z);
input   [9:0]a;
input  [8:0]b;
output [18:0]z;
assign z = a*b;
endmodule
