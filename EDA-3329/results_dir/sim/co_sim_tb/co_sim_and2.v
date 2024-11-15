`timescale 1ns/1ps
module co_sim_and2;
// Clock signals
    reg			clock0;
    reg 		[2:0] 		id;
    reg 		a;
    reg 		b;
    wire 		c	,	c_netlist;
	integer		mismatch	=	0;

and2	golden (.*);

`ifdef PNR_SIM
	and2_post_route route_net (.*, .c(c_netlist) );
`else
	and2_post_synth synth_net (.*, .c(c_netlist) );
`endif

`ifdef TIMED_SIM
	initial begin
		$display("SDF ANNOTATION: ../routing/fabric_and2_post_route_blasted.sdf");
		$sdf_annotate("../routing/fabric_and2_post_route_blasted.sdf", co_sim_and2.route_net.fabric_instance);
	end
`endif

// clock initialization for clock0
initial begin
	clock0 = 1'b0;
	forever #10 clock0 = ~clock0;
end

// Initialize values to zero 
initial	begin
		{id, a, b } <= 'd0;
	 repeat (2) @ (negedge clock0); 
	compare();
	//Random stimulus generation
	repeat(100) @ (negedge clock0) begin
		id                   <= $urandom();
		a                    <= $urandom();
		b                    <= $urandom();

		compare();
	end

	// ----------- Corner Case stimulus generation -----------
	repeat (2) @(negedge clock0);
	id                     <= 3'd7;
	a                      <= 1'd1;
	b                      <= 1'd1;
	repeat (2) @ (negedge clock0);
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
	if ( c !== c_netlist ) begin
		$display("Data Mismatch: Actual output: %0d, Netlist Output %0d, Time: %0t ", c, c_netlist,  $time);
		mismatch = mismatch+1;
	end
	else
		$display("Data Matched: Actual output: %0d, Netlist Output %0d, Time: %0t ", c, c_netlist,  $time);
endtask

initial begin
	$dumpfile("tb.vcd");
	$dumpvars;
end

endmodule
