`timescale 1ns/1ps
module co_sim_syn2;
// Clock signals
    reg			clock;
    reg 		[31:0] 		in4;
    wire 		[31:0] 		out_2	,	out_2_netlist;
    reg 		[31:0] 		in1;
    wire 		[31:0] 		out_3	,	out_3_netlist;
    wire 		[31:0] 		out_1	,	out_1_netlist;
    reg 		[31:0] 		in5;
    wire 		[31:0] 		out_4	,	out_4_netlist;
    reg 		[31:0] 		in3;
    reg 		[31:0] 		in2;
    reg 		reset;
	integer		mismatch	=	0;

syn2	golden (.*);

`ifdef PNR_SIM
	syn2_post_route route_net (.*, .out_2(out_2_netlist), .out_3(out_3_netlist), .out_1(out_1_netlist), .out_4(out_4_netlist) );
`else
	syn2_post_synth synth_net (.*, .out_2(out_2_netlist), .out_3(out_3_netlist), .out_1(out_1_netlist), .out_4(out_4_netlist) );
`endif

`ifdef TIMED_SIM
	initial begin
		$display("SDF ANNOTATION: ../routing/fabric_syn2_post_route_blasted.sdf");
		$sdf_annotate("../routing/fabric_syn2_post_route_blasted.sdf", co_sim_syn2.route_net.fabric_instance);
	end
`endif

// clock initialization for clock
initial begin
	clock = 1'b0;
	forever #5.0 clock = ~clock;
end

// Initialize values to zero 
initial	begin
		{in4, in1, in5, in3, in2, reset } <= 'd0;
	 repeat (2) @ (negedge clock); 
	compare();
	//Random stimulus generation
	repeat(100) @ (negedge clock) begin
		in4                  <= $urandom();
		in1                  <= $urandom();
		in5                  <= $urandom();
		in3                  <= $urandom();
		in2                  <= $urandom();
		reset                <= $urandom();

		compare();
	end

	// ----------- Corner Case stimulus generation -----------
	repeat (2) @(negedge clock);
	in4                    <= 32'd4294967295;
	in1                    <= 32'd4294967295;
	in5                    <= 32'd4294967295;
	in3                    <= 32'd4294967295;
	in2                    <= 32'd4294967295;
	reset                  <= 1'd1;
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
	if ( out_2 !== out_2_netlist	||	out_3 !== out_3_netlist	||	out_1 !== out_1_netlist	||	out_4 !== out_4_netlist ) begin
		$display("Data Mismatch: Actual output: %0d, %0d, %0d, %0d, Netlist Output %0d, %0d, %0d, %0d, Time: %0t ", out_2, out_3, out_1, out_4, out_2_netlist, out_3_netlist, out_1_netlist, out_4_netlist,  $time);
		mismatch = mismatch+1;
	end
	else
		$display("Data Matched: Actual output: %0d, %0d, %0d, %0d, Netlist Output %0d, %0d, %0d, %0d, Time: %0t ", out_2, out_3, out_1, out_4, out_2_netlist, out_3_netlist, out_1_netlist, out_4_netlist,  $time);
endtask

initial begin
	$dumpfile("tb.vcd");
	$dumpvars;
end

endmodule
