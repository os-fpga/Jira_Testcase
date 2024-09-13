`timescale 1ns/1ps
module co_sim_design197_15_15_top;
// Clock signals
    reg			clk;
// Reset signals
    reg			rst;

    reg 		[31:0] 		in;
    wire 		[31:0] 		out	,	out_netlist;
	integer		mismatch	=	0;

design197_15_15_top	golden (.*);

`ifdef PNR_SIM
	design197_15_15_top_post_route route_net (.*, .out(out_netlist) );
`else
	design197_15_15_top_post_synth synth_net (.*, .out(out_netlist) );
`endif

`ifdef TIMED_SIM
	initial begin
		$display("SDF ANNOTATION: ../routing/fabric_design197_15_15_top_post_route.sdf");
		$sdf_annotate("../routing/fabric_design197_15_15_top_post_route.sdf", co_sim_design197_15_15_top.route_net.fabric_instance);
	end
`endif

// clock initialization for clk
initial begin
	clk = 1'b0;
	forever #5.0 clk = ~clk;
end
//Reset Stimulus generation
initial begin

// Initialization for design197_15_15_inst.memory_cntrl_instance9814.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance9814.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance9811.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance9811.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance878.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance878.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance8714.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance8714.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance760.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance760.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance5412.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance5412.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance435.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance435.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance4313.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance4313.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance214.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance214.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance150142.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance150142.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance1401312.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance1401312.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance130121.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance130121.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance1201110.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance1201110.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance120110.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance120110.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance1101014.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance1101014.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance106.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance106.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance101.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance101.mem.mem[i] = 'b0;
	end


// Initialization for design197_15_15_inst.memory_cntrl_instance10096.mem.mem
	for (integer i = 0; i < 1024; i++)  begin
		golden.design197_15_15_inst.memory_cntrl_instance10096.mem.mem[i] = 'b0;
	end

	$display ("***Reset Test is applied***");
	rst <= 1;
	{in } <= 'd0;
	repeat (2) @(negedge clk);
	rst <= 0;
	@(negedge clk);
	compare();
	$display ("***Reset Test is ended***");
	//Random stimulus generation
	repeat(100) @ (negedge clk) begin
		in                   <= $urandom();
		compare();
end

	// ----------- Corner Case stimulus generation -----------
	repeat (2) @(negedge clk);
	in                     <= 32'd4294967295;
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
