module co_sim_add_shifted_a_to_mult_output;
	reg  [19:0] a;
	reg  [17:0] b;
	wire [37:0] z_out;
	reg  [5:0] acc_fir;
	reg  [37:0] expected_out;
	wire [37:0] z_out_netlist;

	integer mismatch=0;

add_shifted_a_to_mult_output golden(.*);
add_shifted_a_to_mult_output_post_synth netlist(.*, .z_out(z_out_netlist));

initial begin
	a=0;
	b=0;
	$display ("\n\n*** Random Functionality Tests for multiplier with unsigned inputs are applied***\n\n");
	repeat (8) begin
		a = $urandom( );
		b = $urandom( );
		acc_fir = $urandom( );
		expected_out = (a<<acc_fir) + (4096*b);
		#10;
		display_stimulus();
		compare();
		#10;
	end
	$display ("\n\n***Random Functionality Tests for multiplier with unsigned inputs are ended***\n\n");

	$display ("\n\n***Directed Functionality Test for multiplier is applied***\n\n");
	a = 20'd255;
	b = 18'd1;
	acc_fir =6'h1;
	expected_out = (a<<acc_fir) + (4096*b);
	#10;
	display_stimulus();
	compare();
	$display ("\n\n***Directed Functionality Test for multiplier is ended***\n\n");

		$display ("\n\n***Directed Functionality Test for multiplier is applied***\n\n");
	a = 20'd255;
	b = 18'd1;
	acc_fir =6'h1;
	expected_out = (a<<acc_fir) + (4096*b);
	#10;
	display_stimulus();
	compare();
	$display ("\n\n***Directed Functionality Test for multiplier is ended***\n\n");

	$display ("\n\n***Directed Functionality Test for multiplier is applied***\n\n");
	a = 20'd255;
	b = 18'd1;
	acc_fir =6'h1;
	expected_out = (a<<acc_fir) + (4096*b);
	#10;
	display_stimulus();
	compare();
	$display ("\n\n***Directed Functionality Test for multiplier is ended***\n\n");

	$display ("\n\n***Directed Functionality Test for multiplier is applied***\n\n");
	a = 20'hfffff;
	b = 18'h3ffff;
	acc_fir =6'h3f;
	expected_out = (a<<acc_fir) + (4096*b);
	#10;
	display_stimulus();
	compare();
	$display ("\n\n***Directed Functionality Test for multiplier is ended***\n\n");
	#100;
	if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nSimulation Failed", mismatch);
	$finish;
	end
	

task compare();
 	$display("*** Comparing ***");
  	if(z_out !== z_out_netlist || z_out_netlist !== expected_out || z_out !== expected_out) begin
    	$display("Data Mismatch. Golden RTL: %0d, Netlist: %0d, Expected output: %0d, Time: %0t", z_out, z_out_netlist, expected_out, $time);
    	mismatch = mismatch+1;
 	end
  	else begin
  		$display("Data Matched. Golden RTL: %0d, Netlist: %0d,  Expected output: %0d, Time: %0t", z_out, z_out_netlist, expected_out, $time);
	end
endtask

task display_stimulus();
	$display ($time,," Test stimulus is: a=%0d, b=%0d, acc_fir=%0d", a, b, acc_fir);
endtask

initial begin
    $dumpfile("tb.vcd");
    $dumpvars;
end
endmodule