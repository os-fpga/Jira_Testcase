// Verilog testbench file
module  co_sim_memset;
		wire         [`MEMORY_CONTROLLER_ADDR_SIZE-1:0] return_val	,	return_val_netlist;
		reg                   clk;                    
		reg                   reset;                  
		reg                   start;                  
		wire                  finish	,	finish_netlist;
		reg          [`MEMORY_CONTROLLER_ADDR_SIZE-1:0] m;                      
		reg          [31:0]   c;                      
		reg          [31:0]   n;                      
		wire         [`MEMORY_CONTROLLER_ADDR_SIZE-1:0] memory_controller_address	,	memory_controller_address_netlist;
		wire                  memory_controller_write_enable	,	memory_controller_write_enable_netlist;
		wire         [`MEMORY_CONTROLLER_DATA_SIZE-1:0] memory_controller_in	,	memory_controller_in_netlist;
		wire         [`MEMORY_CONTROLLER_DATA_SIZE-1:0] memory_controller_out	,	memory_controller_out_netlist;
		integer	mismatch	=	0;

memset	golden (.*);

`ifdef PNR
`else
	memset_post_synth synth_net (.*, .return_val(return_val_netlist), .finish(finish_netlist), .memory_controller_address(memory_controller_address_netlist), .memory_controller_write_enable(memory_controller_write_enable_netlist), .memory_controller_in(memory_controller_in_netlist), .memory_controller_out(memory_controller_out_netlist) );
`endif

//clock initialization
initial begin
	clk = 1'b0;
	forever #5 clk = ~clk;
end

//Reset Stimulus generation
initial begin
	reset = 1;
	@(negedge clk);
	reset = 0;
	{start, m, c, n } = 'd0;
	$display ("***Reset Test is applied***");
	@(negedge clk);
	@(negedge clk);
	compare();
	$display ("***Reset Test is ended***");
	//Random stimulus generation
	repeat(100) @ (negedge clk) begin
		start = $random();
		m = $random();
		c = $random();
		n = $random();
		compare();
end

	// ----------- Corner Case stimulus generation -----------
	start = 1;
	m = 1;
	c = 4294967296;
	n = 4294967296;
	compare();

	if(mismatch == 0)
		$display("**** All Comparison Matched *** \n		Simulation Passed\n");
	else
		$display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
	repeat(100) @ (posedge clk);
	$finish;
end

task compare();
	if ( return_val !== return_val_netlist	||	finish !== finish_netlist	||	memory_controller_address !== memory_controller_address_netlist	||	memory_controller_write_enable !== memory_controller_write_enable_netlist	||	memory_controller_in !== memory_controller_in_netlist	||	memory_controller_out !== memory_controller_out_netlist ) begin
		$display("Data Mismatch: Actual output: %0d, %0d, %0d, %0d, %0d, %0d, Netlist Output %0d, %0d, %0d, %0d, %0d, %0d, Time: %0t ", return_val, finish, memory_controller_address, memory_controller_write_enable, memory_controller_in, memory_controller_out, return_val_netlist, finish_netlist, memory_controller_address_netlist, memory_controller_write_enable_netlist, memory_controller_in_netlist, memory_controller_out_netlist,  $time);
		mismatch = mismatch+1;
	end
	else
		$display("Data Matched: Actual output: %0d, %0d, %0d, %0d, %0d, %0d, Netlist Output %0d, %0d, %0d, %0d, %0d, %0d, Time: %0t ", return_val, finish, memory_controller_address, memory_controller_write_enable, memory_controller_in, memory_controller_out, return_val_netlist, finish_netlist, memory_controller_address_netlist, memory_controller_write_enable_netlist, memory_controller_in_netlist, memory_controller_out_netlist,  $time);
endtask

initial begin
	$dumpfile("tb.vcd");
	$dumpvars;
end

endmodule
