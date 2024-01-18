module co_sim_add__a_to_output;
	
  // Ports
wire  out;
wire  out_net;

add__a_to_output golden (.out  ( out));
reg clk;
add__a_to_output_post_route netlist( out_net);
integer mismatch=0;

//clock initialization
initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
end


initial begin
    
	#10;
	@(posedge clk);
	@(posedge clk);
	compare();
	
	if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nError: Simulation Failed", mismatch);
	repeat (10) @(posedge clk)
	$finish;
	end
	

task compare();
 	$display("*** Comparing ***");
  	if ((out !== out_net) ) begin
    	$display("Data Mismatch. Golden RTL: %0d, Netlist: %0d, Time: %0t", out, out_net, $time);
    	mismatch = mismatch+1;
 	end
  	else begin
  		$display("Data Matched. Golden RTL: %0d, Netlist: %0d, Time: %0t", out, out_net, $time);
	end
endtask


initial begin
    $dumpfile("tb.vcd");
    $dumpvars;
end
endmodule