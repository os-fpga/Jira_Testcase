`timescale 1ns/1ps
module co_sim_aes_192;
// Clock signals
    reg			clk;
    reg 		[191:0] 		key;
    wire 		[127:0] 		out	,	out_netlist;
    reg 		[127:0] 		state;
	integer		mismatch	=	0;

aes_192	golden (.*);

`ifdef PNR_SIM
	aes_192_post_route route_net (.*, .out(out_netlist) );
`else
	aes_192_post_synth synth_net (.*, .out(out_netlist) );
`endif

`ifdef TIMED_SIM
	initial begin
		$sdf_annotate("../routing/fabric_aes_192_post_route.sdf", co_sim_aes_192.route_net.fabric_dut_inst);
	end
`endif

// clock initialization for clk
initial begin
	clk = 1'b0;
	forever #5.0 clk = ~clk;
end

// Initialize values to zero 
initial	begin
		{key, state } <= 'd0;
	 repeat (5) @ (negedge clk); 
	compare();
	//Random stimulus generation
	repeat(100) @ (negedge clk) begin
		key                  <= $urandom();
		state                <= $urandom();

		compare();
	end

	// ----------- Corner Case stimulus generation -----------
	key                    <= 6277101735386680763835789423207666416102355444464034512895;
	state                  <= 340282366920938463463374607431768211455;
	repeat (2) @ (negedge clk);
	compare();
	if(mismatch == 0)
		$display("**** All Comparison Matched *** \n		Simulation Passed\n");
	else
		begin
		$display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
		$fatal(1);
		end
	#200;
	$finish;
end

task compare();
	if ( out !== out_netlist ) begin
		$display("Data Mismatch: Actual output: %0d, Netlist Output %0d, Time: %0t ", out, out_netlist,  $time);
		mismatch = mismatch+1;
	end
	else
		$display("Data Matched: Actual output: %0d, Netlist Output %0d, Time: %0t ", out, out_netlist,  $time);
endtask

initial begin
	$dumpfile("tb.vcd");
	$dumpvars;
end

endmodule
