module dsp_19x2_raptor(a, b, z);
input [19:0] a;
input [17:0] b;
output [37:0] z;

DSP19X2 #(
    .DSP_MODE("MULTIPLY"),
    .OUTPUT_REG_EN("FALSE"),
    .INPUT_REG_EN("FALSE")
    )
    dsp_model(
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
    .SATURATE(),
    .SHIFT_RIGHT(),
    .ROUND(),
    .SUBTRACT(),
    .DLY_B2()
    );
endmodule
