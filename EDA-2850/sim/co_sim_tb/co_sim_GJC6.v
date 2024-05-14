`timescale 1ns/1ps
module co_sim_GJC6;
// Clock signals
    reg			clk;
    reg 		din;
    reg 		oe;
    wire 		tristate_out	,	tristate_out_netlist;
	integer		mismatch	=	0;

GJC6	golden (.*);

`ifdef PNR
	GJC6_post_route route_net (.*, .tristate_out(tristate_out_netlist) );
`else
	GJC6_post_synth synth_net (.*, .tristate_out(tristate_out_netlist) );
`endif

// clock initialization for clk
initial begin
	clk = 1'b0;
	forever #1 clk = ~clk;
end

// Initialize values to zero 
initial	begin
	repeat (2) @ (negedge clk);
	{din, oe } <= 'd0;
	 repeat (2) @ (negedge clk); 
	compare();
	//Random stimulus generation
	repeat(100) @ (negedge clk) begin
		din			 <= $urandom();
		oe			 <= $urandom();

		compare();
	end

	// ----------- Corner Case stimulus generation -----------
	din <= 1;
	oe <= 1;
	repeat (2) @ (negedge clk);
	compare();
	if(mismatch == 0)
		$display("**** All Comparison Matched *** \n		Simulation Passed\n");
	else
		$display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
	#200;
	$finish;
end

task compare();
	if ( tristate_out !== tristate_out_netlist ) begin
		$display("Data Mismatch: Actual output: %0d, Netlist Output %0d, Time: %0t ", tristate_out, tristate_out_netlist,  $time);
		mismatch = mismatch+1;
	end
	else
		$display("Data Matched: Actual output: %0d, Netlist Output %0d, Time: %0t ", tristate_out, tristate_out_netlist,  $time);
endtask

initial begin
	$dumpfile("tb.vcd");
	$dumpvars;
end

endmodule
