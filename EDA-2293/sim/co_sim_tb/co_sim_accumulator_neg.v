
module co_sim_accumulator_neg;
	reg signed [19:0] A;
	reg clk, reset, subtract_i;
	wire signed [37:0] P;
	wire signed [37:0] P_netlist;

	integer mismatch=0;

accumulator_neg golden(.*);
accumulator_neg_post_synth netlist(.*, .P(P_netlist));

//clock initialization
initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
end
initial begin
	reset = 0;
	A=0;
	subtract_i = 0;
	@(posedge clk);
	reset = 1;
	$display ("\n\n***Reset Test is applied***\n\n");
	display_stimulus();
	@(posedge clk);
	@(posedge clk);
	compare();
	$display ("\n\n***Reset Test is ended***\n\n");

	reset = 0;
	@(posedge clk);

	$display ("\n\n***Directed Functionality Test is applied for P = P + A***\n\n");
	A = 20'hfffff;
	display_stimulus();
	@(posedge clk);
	compare();
	$display ("\n\n***Directed Functionality Test for P = P + A is ended***\n\n");

	$display ("\n\n*** Random Functionality Tests with signed inputs are applied for P = P + A***\n\n");
	A = $random( );
	@(posedge clk);
	repeat (32) begin
		display_stimulus();
		@(posedge clk);
		compare();
	end
	$display ("\n\n***Random Functionality Tests with signed inputs for P = P + A are ended***\n\n");

	reset =1;
	A=0;
	$display ("\n\n***Reset Test is applied***\n\n");
	display_stimulus();
	@(posedge clk);
	@(posedge clk);
	compare();
	$display ("\n\n***Reset Test is ended***\n\n");

	subtract_i = 1;
	reset=0;
	@(posedge clk);
	$display ("\n\n***Reset Value is set zero again***\n\n");

	$display ("\n\n*** Random Functionality Tests with signed inputs are applied for P = P - A***\n\n");
	A = $random( );
	@(posedge clk);
	repeat (1000) begin
		display_stimulus();
		@(posedge clk);
		compare();
	end
	if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
	$finish;
end
	

task compare();
 	
  	if(P !== P_netlist) begin
    	$display("Data Mismatch. Golden: %0d, Netlist: %0d, Time: %0t", P, P_netlist, $time);
    	mismatch = mismatch+1;
 	end
  	else
  		$display("Data Matched. Golden: %0d, Netlist: %0d, Time: %0t", P, P_netlist, $time);
endtask

task display_stimulus();
	$display ($time,," Test stimulus is: A=%0d", A);
endtask

initial begin
    $dumpfile("tb1.vcd");
    $dumpvars;
end
endmodule