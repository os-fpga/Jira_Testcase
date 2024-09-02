`timescale 1ns/1ps
module co_sim_adder_tree;
// Clock signals
    reg			clock;
    reg 		[1055:0] 		data;
    wire 		[37:0] 		result	,	result_netlist;
    reg 		clock_ena;
	integer		mismatch	=	0;

adder_tree	golden (.*);

`ifdef PNR_SIM
	adder_tree_post_route route_net (.*, .result(result_netlist) );
`else
	adder_tree_post_synth synth_net (.*, .result(result_netlist) );
`endif

`ifdef TIMED_SIM
	initial begin
		$sdf_annotate("../routing/fabric_adder_tree_post_route.sdf", co_sim_adder_tree.route_net.fabric_dut_inst);
	end
`endif

// clock initialization for clock
initial begin
	clock = 1'b0;
	forever #5.0 clock = ~clock;
end

// Initialize values to zero 
initial	begin
		{data, clock_ena } <= 'd0;
	 repeat (2) @ (negedge clock); 
	compare();
	//Random stimulus generation
	repeat(100) @ (negedge clock) begin
		data                 <= $urandom();
		clock_ena            <= $urandom();

		compare();
	end

	// ----------- Corner Case stimulus generation -----------
	repeat (2) @(negedge clock);
	data                   <= 772103322247736428651791941524190166662432288223808740069966728315087660095197093551484618001698015194652854401843307157096133183997320086925557708514169730840749451738610692460887556999562135090788908685580234789131193097780962748024381086918485856402626253175196722230275782071039209488625822100242638638716536487935;
	clock_ena              <= 1;
	repeat (2) @ (negedge clock);
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
	if ( result !== result_netlist ) begin
		$display("Data Mismatch: Actual output: %0d, Netlist Output %0d, Time: %0t ", result, result_netlist,  $time);
		mismatch = mismatch+1;
	end
	else
		$display("Data Matched: Actual output: %0d, Netlist Output %0d, Time: %0t ", result, result_netlist,  $time);
endtask

initial begin
	$dumpfile("tb.vcd");
	$dumpvars;
end

endmodule
