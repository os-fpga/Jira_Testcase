`define B_REGISTERED_INPUT_TO_OUTPUT 1

module b_registered_input_to_output (
    input  wire [                       19:0] a    ,
    input  wire [                       17:0] b    ,
    input  wire                               clock0, reset,
    output wire [                       17:0] dly_b,
    output wire [                       37:0] z_out,
    input       [$clog2(`B_REGISTERED_INPUT_TO_OUTPUT)-1:0] id
);

    reg     [19:0] a_Inst    [`B_REGISTERED_INPUT_TO_OUTPUT-1:0];
    reg     [17:0] b_Inst    [`B_REGISTERED_INPUT_TO_OUTPUT-1:0];
    wire    [17:0] dly_b_Inst[`B_REGISTERED_INPUT_TO_OUTPUT-1:0];
    wire    [37:0] z_out_Inst[`B_REGISTERED_INPUT_TO_OUTPUT-1:0];
    integer        j                              ;
    genvar      i                              ;

generate
  for (i = 0; i < `B_REGISTERED_INPUT_TO_OUTPUT; i=i+1) begin
    b_registered_input_to_output_sub b_registered_input_to_output_sub (
      .clock0  (clock0    ),
      .reset(reset        ),
      .a    (a_Inst[i]    ),
      .b    (b_Inst[i]    ),
      .dly_b(dly_b_Inst[i]),
      .z_out(z_out_Inst[i])
    );
  end
endgenerate

always @(*) begin
    for (j = 0; j < `B_REGISTERED_INPUT_TO_OUTPUT; j=j+1) begin
        a_Inst[j]       = 'd0;
        b_Inst[j]       = 'd0;
    end
    a_Inst[id]       = a;
    b_Inst[id]       = b;

end

assign z_out = z_out_Inst[id];
assign dly_b = dly_b_Inst[id];

endmodule

module b_registered_input_to_output_sub (
	input  wire [19:0] a,
  input  wire [17:0] b,
	input  wire clock0, reset,
  output wire [17:0] dly_b,
  output wire [37:0] z_out
);

  parameter [0:83] MODE_BITS = 84'd1; 
  wire [37:0] z_w;

	RS_DSP #(.MODE_BITS(MODE_BITS)) 
    inst(.a(a), .b(b), .acc_fir(6'd0), .z(z_w), .dly_b(dly_b), .clk(clock0), 
    .lreset(reset) , .feedback(3'd1), .load_acc(1'b0),
    .unsigned_a(1'b1), .unsigned_b(1'b1), .saturate_enable(1'b0), .shift_right(6'b0),
    .round(1'b0), .subtract(1'b0)
	);

  assign z_out = z_w;

endmodule