`timescale 1ns/1ps
module co_sim_aes_inv_cipher_top;
// Clock signals
    reg			clk;
// Reset signals
    reg			kld;
    reg			rst;

    wire 		[127:0] 		text_out	,	text_out_netlist;
    reg 		[127:0] 		text_in;
    reg 		[127:0] 		key;
    wire 		done	,	done_netlist;
    reg 		ld;
	integer		mismatch	=	0;

aes_inv_cipher_top	golden (.*);

`ifdef PNR_SIM
	aes_inv_cipher_top_post_route route_net (.*, .text_out(text_out_netlist), .done(done_netlist) );
`else
	aes_inv_cipher_top_post_synth synth_net (.*, .text_out(text_out_netlist), .done(done_netlist) );
`endif

`ifdef TIMED_SIM
	initial begin
		$sdf_annotate("../routing/fabric_aes_inv_cipher_top_post_route.sdf", co_sim_aes_inv_cipher_top.route_net.fabric_dut_inst);
	end
`endif

// clock initialization for clk
initial begin
	clk = 1'b0;
	forever #2 clk = ~clk;
end
//Reset Stimulus generation
initial begin

// Initialization for kb
	for (integer i = 0; i < 11; i++)  begin
		golden.kb[i] = 'b0;
	end

	$display ("***Reset Test is applied***");
	kld <= 0;
	{text_in, key, ld } <= 'd0;
	repeat (2) @(negedge clk);
	kld <= 1;
	@(negedge clk);
	$display ("***Reset Test is applied***");
	rst <= 0;
	{text_in, key, ld } <= 'd0;
	repeat (2) @(negedge clk);
	rst <= 1;
	@(negedge clk);
	compare();
	$display ("***Reset Test is ended***");
	//Random stimulus generation
	repeat(2000) @ (negedge clk) begin
		text_in              <= $urandom();
		key                  <= $urandom();
		ld                   <= $urandom();
		compare();
end

	// ----------- Corner Case stimulus generation -----------
	repeat (2) @(negedge clk);
	text_in                <= 340282366920938463463374607431768211455;
	key                    <= 340282366920938463463374607431768211455;
	ld                     <= 1;
	compare();

	if(mismatch == 0)
		$display("**** All Comparison Matched *** \n		Simulation Passed\n");
	else
		begin
		$display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
		$fatal(1);
		end
	repeat(200) @(posedge clk);
	$finish;
end

task compare();
	if ( text_out !== text_out_netlist	||	done !== done_netlist ) begin
		$display("Data Mismatch: Actual output: %0d, %0d, Netlist Output %0d, %0d, Time: %0t ", text_out, done, text_out_netlist, done_netlist,  $time);
		mismatch = mismatch+1;
	end
	else
		$display("Data Matched: Actual output: %0d, %0d, Netlist Output %0d, %0d, Time: %0t ", text_out, done, text_out_netlist, done_netlist,  $time);
endtask

initial begin
	$dumpfile("tb.vcd");
	$dumpvars;
end

endmodule
