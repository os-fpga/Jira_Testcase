module add_shifted_a_to_mult_output (
	input  wire [19:0] a,
    input  wire [17:0] b,
    input  wire [5:0] acc_fir,
    output wire [37:0] z_out
    );
    
    wire [37:0] z_w;
	RS_DSP2_MULTADD #(
    .MODE_BITS(80'h1000)) 
        inst(.a(a),.b(b),.z(z_w),.reset(1'b0),.load_acc(1'b0),.feedback(3'd4),.acc_fir(acc_fir),.unsigned_a(1'b1),.unsigned_b(1'b1)
        ,.f_mode(1'b0),.output_select(3'd2),.saturate_enable(1'b0),.shift_right(6'd0),.round(1'b0),.subtract(1'b0),.register_inputs(1'b0));
	
    assign z_out = z_w;

endmodule