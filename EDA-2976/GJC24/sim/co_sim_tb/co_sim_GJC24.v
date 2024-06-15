`timescale 1ns/1ps
module co_sim_GJC24;
// Clock signals
    reg			clk_i;
// Reset signals
    reg			reset_n;

    reg 		[1:0] 		data_i;
    wire 		data_o_n	,	data_o_n_netlist;
    wire 		data_o_p	,	data_o_p_netlist;
    reg 		enable;
	integer		mismatch	=	0;

GJC24	golden (.*);

`ifdef PNR
	GJC24_post_route route_net (.*, .data_o_n(data_o_n_netlist), .data_o_p(data_o_p_netlist) );
`else
	GJC24_post_synth synth_net (.*, .data_o_n(data_o_n_netlist), .data_o_p(data_o_p_netlist) );
`endif

// clock initialization for clk_i
initial begin
	clk_i = 1'b0;
	forever #1 clk_i = ~clk_i;
end
//Reset Stimulus generation
initial begin
	reset_n <= 0;
	@(negedge clk_i);
	{data_i, enable } <= 'd0;
	reset_n <= 1;
	@(negedge clk_i);
	$display ("***Reset Test is applied***");
	@(negedge clk_i);
	@(negedge clk_i);
	compare();
	$display ("***Reset Test is ended***");
	//Random stimulus generation
	repeat(100) @ (negedge clk_i) begin
		data_i               <= $urandom();
		enable               <= $urandom();
		compare();
end

	// ----------- Corner Case stimulus generation -----------
	data_i                 <= 3;
	enable                 <= 1;
	compare();

	if(mismatch == 0)
		$display("**** All Comparison Matched *** \n		Simulation Passed\n");
	else
		$display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
	repeat(200) @(posedge clk_i);
	$finish;
end

task compare();
	if ( data_o_n !== data_o_n_netlist	||	data_o_p !== data_o_p_netlist ) begin
		$display("Data Mismatch: Actual output: %0d, %0d, Netlist Output %0d, %0d, Time: %0t ", data_o_n, data_o_p, data_o_n_netlist, data_o_p_netlist,  $time);
		mismatch = mismatch+1;
	end
	else
		$display("Data Matched: Actual output: %0d, %0d, Netlist Output %0d, %0d, Time: %0t ", data_o_n, data_o_p, data_o_n_netlist, data_o_p_netlist,  $time);
endtask

initial begin
	$dumpfile("tb.vcd");
	$dumpvars;
end

endmodule
