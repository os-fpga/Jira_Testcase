`define SUBTRACT_MULT_OUTPUT_COEFF2_FROM_SHIFTED_A_COMB 1
module subtract_mult_output_coeff2_from_shifted_a_comb(
    input  wire                               clock0 ,
    input  wire [                       19:0] a      ,
    input  wire [                       17:0] b      ,
    input  wire [                        5:0] acc_fir,
    output wire [                       37:0] z_out  ,
    input       [$clog2(`SUBTRACT_MULT_OUTPUT_COEFF2_FROM_SHIFTED_A_COMB)-1:0] id
);
    reg  [19:0] a_Inst      [0:`SUBTRACT_MULT_OUTPUT_COEFF2_FROM_SHIFTED_A_COMB-1];
    reg  [17:0] b_Inst      [0:`SUBTRACT_MULT_OUTPUT_COEFF2_FROM_SHIFTED_A_COMB-1];
    reg  [ 5:0] acc_fir_Inst[0:`SUBTRACT_MULT_OUTPUT_COEFF2_FROM_SHIFTED_A_COMB-1];
    wire [37:0] z_out_Inst  [0:`SUBTRACT_MULT_OUTPUT_COEFF2_FROM_SHIFTED_A_COMB-1];

genvar i;
integer j;
generate
    for (i = 0; i < `SUBTRACT_MULT_OUTPUT_COEFF2_FROM_SHIFTED_A_COMB; i=i+1) begin
        subtract_mult_output_coeff2_from_shifted_a_comb_sub subtract_mult_output_coeff2_from_shifted_a_comb_sub (
            .clock0 (clock0),
            .a      (a_Inst[i]      ),
            .b      (b_Inst[i]      ),
            .acc_fir(acc_fir_Inst[i]),
            .z_out  (z_out_Inst[i]  )
        );
    end
endgenerate


always @(*) begin

    for (j = 0; j < `SUBTRACT_MULT_OUTPUT_COEFF2_FROM_SHIFTED_A_COMB; j=j+1) begin
        a_Inst[j]  = 'd0;
        b_Inst[j]       = 'd0;
        acc_fir_Inst[j] = 'd0;
    end
    a_Inst[id]  = a;
    b_Inst[id]       = b;
    acc_fir_Inst[id] = acc_fir;

end

assign z_out = z_out_Inst[id];

endmodule

module subtract_mult_output_coeff2_from_shifted_a_comb_sub (
    input  wire clock0,
	input  wire [19:0] a,
    input  wire [17:0] b,
    input  wire [5:0] acc_fir,
    output wire [37:0] z_out
    );
    parameter [0:79] MODE_BITS = 80'h800000000; 

    wire [37:0] z_w;

	RS_DSP_MULTADD #(
    .MODE_BITS(MODE_BITS)) 
        inst(.a(a), .b(b), .z(z_w), .clk(clock0), .lreset(1'b0), .load_acc(1'b0), .feedback(3'd6),
        .acc_fir(acc_fir),.unsigned_a(1'b1), .unsigned_b(1'b1),
        .saturate_enable(1'b0), .shift_right(6'd0), .round(1'b0), .subtract(1'b1));
	
    assign z_out = z_w;

endmodule