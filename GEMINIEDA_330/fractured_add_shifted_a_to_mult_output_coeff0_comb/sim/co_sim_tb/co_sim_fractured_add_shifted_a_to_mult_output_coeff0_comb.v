module co_sim_fractured_add_shifted_a_to_mult_output_coeff0_comb;
	reg  [19:0] a;
	reg  [17:0] b;
	wire [37:0] z_out;
	reg  [5:0] acc_fir;
	reg  [37:0] expected_out;
	wire [37:0] z_out_netlist;

	integer mismatch=0;

	parameter [79:0] MODE_BITS = 80'h1000;

fractured_add_shifted_a_to_mult_output_coeff0_comb golden(.*);
fractured_add_shifted_a_to_mult_output_coeff0_comb_post_synth netlist(.*, .z_out(z_out_netlist));

initial begin
	a=0;
	b=0;
	$display ("\n\n*** Random Functionality Tests for multiplier with unsigned inputs are applied***\n\n");
	repeat (8) begin
		a = $urandom( );
		b = $urandom( );
		acc_fir = $urandom_range(1,19);
		//expected_out = (a<<acc_fir) + (MODE_BITS[19:10] * b);
		//frac_mult = a[19:10] *b[17:9];
		//frac_mult2 = a[9:0] *b[8:0];
		expected_out[37:19] = (a[19:10]<<acc_fir) + (MODE_BITS[19:10] * b[17:9]);
		expected_out[18:0] = (a[9:0]<<acc_fir) + (MODE_BITS[9:0] * b[8:0]);
		//expected_out = {frac_mult,frac_mult2};
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
	expected_out[37:19] = (a[19:10]<<acc_fir) + (MODE_BITS[19:10] * b[17:9]);
	expected_out[18:0] = (a[9:0]<<acc_fir) + (MODE_BITS[9:0] * b[8:0]);
	#10;
	display_stimulus();
	compare();
	$display ("\n\n***Directed Functionality Test for multiplier is ended***\n\n");

	$display ("\n\n***Directed Functionality Test for multiplier is applied***\n\n");
	a = 20'd255;
	b = 18'd1;
	acc_fir =6'h1;
	expected_out[37:19] = (a[19:10]<<acc_fir) + (MODE_BITS[19:10] * b[17:9]);
	expected_out[18:0] = (a[9:0]<<acc_fir) + (MODE_BITS[9:0] * b[8:0]);
	#10;
	display_stimulus();
	compare();
	$display ("\n\n***Directed Functionality Test for multiplier is ended***\n\n");

	$display ("\n\n***Directed Functionality Test for multiplier is applied***\n\n");
	a = 20'd255;
	b = 18'd1;
	acc_fir =6'h1;
	expected_out[37:19] = (a[19:10]<<acc_fir) + (MODE_BITS[19:10] * b[17:9]);
	expected_out[18:0] = (a[9:0]<<acc_fir) + (MODE_BITS[9:0] * b[8:0]);
	#10;
	display_stimulus();
	compare();
	$display ("\n\n***Directed Functionality Test for multiplier is ended***\n\n");

	$display ("\n\n***Directed Functionality Test for multiplier is applied***\n\n");
	a = 20'hfffff;
	b = 18'h3ffff;
	acc_fir =6'h2;
	expected_out[37:19] = (a[19:10]<<acc_fir) + (MODE_BITS[19:10] * b[17:9]);
	expected_out[18:0] = (a[9:0]<<acc_fir) + (MODE_BITS[9:0] * b[8:0]);
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
  	if ((z_out !== z_out_netlist) || (z_out_netlist !== expected_out) || (z_out !== expected_out)) begin
    	$display("Data Mismatch. Golden RTL: %0d, Netlist: %0d, Expected output: %0d\nFractured Mode:\n Golden RTL [37:19] : %0d, Netlist [37:19]: %0d, Expected output [37:19]: %0d\n Golden RTL [18:0] : %0d, Netlist [18:0]: %0d, Expected output [18:0]: %0d, Time: %0t", z_out, z_out_netlist, expected_out, z_out[37:19], z_out_netlist[37:19], expected_out[37:19], z_out[18:0], z_out_netlist[18:0], expected_out[18:0], $time);
    	mismatch = mismatch+1;
 	end
  	else begin
  		$display("Data Matched. Golden RTL: %0d, Netlist: %0d, Expected output: %0d\nFractured Mode:\n Golden RTL [37:19] : %0d, Netlist [37:19]: %0d, Expected output [37:19]: %0d\n Golden RTL [18:0] : %0d, Netlist [18:0]: %0d, Expected output [18:0]: %0d, Time: %0t", z_out, z_out_netlist, expected_out, z_out[37:19], z_out_netlist[37:19], expected_out[37:19], z_out[18:0], z_out_netlist[18:0], expected_out[18:0], $time);
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