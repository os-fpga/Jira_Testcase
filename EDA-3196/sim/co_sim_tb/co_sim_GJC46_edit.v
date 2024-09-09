`timescale 1ns/1ps
module co_sim_GJC46_edit;
// Clock signals
    reg			clkGHz;
// Reset signals
    reg			reset;

    reg 		bitslip_ctrl_n;
    reg 		data_i;
    wire 		data_o	,	data_o_netlist;
    reg 		enable_n;
    wire 		ready	,	ready_netlist;
	integer		mismatch	=	0;

GJC46_edit	golden (.*);

`ifdef PNR_SIM
	GJC46_edit_post_route route_net (.*, .data_o(data_o_netlist), .ready(ready_netlist) );
`else
	GJC46_edit_post_synth synth_net (.*, .data_o(data_o_netlist), .ready(ready_netlist) );
`endif

`ifdef TIMED_SIM
	initial begin
		$display("SDF ANNOTATION: ../routing/fabric_GJC46_edit_post_route.sdf");
		$sdf_annotate("../routing/fabric_GJC46_edit_post_route.sdf", co_sim_GJC46_edit.route_net.fabric_instance);
	end
`endif

// clock initialization for clkGHz
initial begin
	clkGHz = 1'b0;
	forever #20 clkGHz = ~clkGHz;
end
//Reset Stimulus generation
initial begin
	$display ("***Reset Test is applied***");
	reset <= 1;
	{bitslip_ctrl_n, data_i, enable_n } <= 'd0;
	repeat (2) @(negedge clkGHz);
	reset <= 0;
	@(negedge clkGHz);
	compare();
	$display ("***Reset Test is ended***");
	//Random stimulus generation
	repeat(2000) @ (negedge clkGHz) begin
		bitslip_ctrl_n       <= $urandom();
		data_i               <= $urandom();
		enable_n             <= $urandom();
		compare();
end

	// ----------- Corner Case stimulus generation -----------
	repeat (2) @(negedge clkGHz);
	bitslip_ctrl_n         <= 1'd1;
	data_i                 <= 1'd1;
	enable_n               <= 1'd1;
	compare();

	if(mismatch == 0)
		$display("**** All Comparison Matched *** \n		Simulation Passed\n");
	else
		begin
		$display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
		$fatal(1);
		end
	repeat(200) @(posedge clkGHz);
	$finish;
end

task compare();
	if ( data_o !== data_o_netlist	||	ready !== ready_netlist ) begin
		$display("Data Mismatch: Actual output: %0d, %0d, Netlist Output %0d, %0d, Time: %0t ", data_o, ready, data_o_netlist, ready_netlist,  $time);
		mismatch = mismatch+1;
	end
	else
		$display("Data Matched: Actual output: %0d, %0d, Netlist Output %0d, %0d, Time: %0t ", data_o, ready, data_o_netlist, ready_netlist,  $time);
endtask

initial begin
	$dumpfile("tb.vcd");
	$dumpvars;
end

endmodule
