`timescale 1ns/1ps
module co_sim_GJC4_updated;
    reg 		[19:0] 		a;
    reg 		[2:0] 		feedback;
    reg 		[17:0] 		b;
    wire 		[37:0] 		z_mult	,	z_mult_netlist;
    reg 		unsigned_a;
    reg 		unsigned_b;
	integer		mismatch	=	0;

GJC4_updated	golden (.*);

`ifdef PNR
	GJC4_updated_post_route route_net (.*, .z_mult(z_mult_netlist) );
`else
	GJC4_updated_post_synth synth_net (.*, .z_mult(z_mult_netlist) );
`endif

		// Initialize values to zero 
initial	begin
	{a, feedback, b, unsigned_a, unsigned_b } <= 'd0;
	#10;
	compare();
// Generating random stimulus 
	for (int i = 0; i < 100; i = i + 1) begin
		a <= $urandom();
		feedback <= $urandom();
		b <= $urandom();
		unsigned_a <= $urandom();
		unsigned_b <= $urandom();
		#10;
		compare();
	end

	// ----------- Corner Case stimulus generation -----------
	a <= 1048575;
	feedback <= 7;
	b <= 262143;
	unsigned_a <= 1;
	unsigned_b <= 1;
	compare();
	#10;
	if(mismatch == 0)
		$display("**** All Comparison Matched *** \n		Simulation Passed\n");
	else
		$display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
	#200;
	$finish;
end

task compare();
	if ( z_mult !== z_mult_netlist ) begin
		$display("Data Mismatch: Actual output: %0d, Netlist Output %0d, Time: %0t ", z_mult, z_mult_netlist,  $time);
		mismatch = mismatch+1;
	end
	else
		$display("Data Matched: Actual output: %0d, Netlist Output %0d, Time: %0t ", z_mult, z_mult_netlist,  $time);
endtask

initial begin
	$dumpfile("tb.vcd");
	$dumpvars;
end

endmodule