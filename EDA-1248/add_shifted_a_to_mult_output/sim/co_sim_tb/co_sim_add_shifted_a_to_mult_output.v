module co_sim_add_shifted_a_to_mult_output;
	reg  [19:0] a;
	reg  [17:0] b;
	reg  clk,reset;
	wire [37:0] z_out;
	reg  [5:0] acc_fir;
	reg  [37:0] expected_out;
	wire [37:0] z_out_netlist;

	integer mismatch=0;

add_shifted_a_to_mult_output golden(.*);
add_shifted_a_to_mult_output_post_route netlist(clk ,
    reset ,
    b[17] ,
    b[16] ,
    b[15] ,
    b[14] ,
    b[13] ,
    b[12] ,
    b[11] ,
    b[10] ,
    b[9] ,
    b[8] ,
    b[7] ,
    b[6] ,
    b[5] ,
    b[4] ,
    b[3] ,
    b[2] ,
    b[1] ,
    b[0] ,
    acc_fir[5] ,
    acc_fir[4] ,
    acc_fir[3] ,
    acc_fir[2] ,
    acc_fir[1] ,
    acc_fir[0] ,
    a[19] ,
    a[18] ,
    a[17] ,
    a[16] ,
    a[15] ,
    a[14] ,
    a[13] ,
    a[12] ,
    a[11] ,
    a[10] ,
    a[9] ,
    a[8] ,
    a[7] ,
    a[6] ,
    a[5] ,
    a[4] ,
    a[3] ,
    a[2] ,
    a[1] ,
    a[0] ,
    z_out_netlist[37] ,
    z_out_netlist[36] ,
    z_out_netlist[35] ,
    z_out_netlist[34] ,
    z_out_netlist[33] ,
    z_out_netlist[32] ,
    z_out_netlist[31] ,
    z_out_netlist[30] ,
    z_out_netlist[29] ,
    z_out_netlist[28] ,
    z_out_netlist[27] ,
    z_out_netlist[26] ,
    z_out_netlist[25] ,
    z_out_netlist[24] ,
    z_out_netlist[23] ,
    z_out_netlist[22] ,
    z_out_netlist[21] ,
    z_out_netlist[20] ,
    z_out_netlist[19] ,
    z_out_netlist[18] ,
    z_out_netlist[17] ,
    z_out_netlist[16] ,
    z_out_netlist[15] ,
    z_out_netlist[14] ,
    z_out_netlist[13] ,
    z_out_netlist[12] ,
    z_out_netlist[11] ,
    z_out_netlist[10] ,
    z_out_netlist[9] ,
    z_out_netlist[8] ,
    z_out_netlist[7] ,
    z_out_netlist[6] ,
    z_out_netlist[5] ,
    z_out_netlist[4] ,
    z_out_netlist[3] ,
    z_out_netlist[2] ,
    z_out_netlist[1] ,
    z_out_netlist[0] );

//clock initialization
initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
end

initial begin
    reset = 0;
	@(negedge clk);
	reset = 1;
	{a, b, expected_out,acc_fir}= 'd0;
	$display ("\n\n***Reset Test is applied***\n\n");
	@(negedge clk);
	@(negedge clk);
	display_stimulus();
	#2;
	compare();
	$display ("\n\n***Reset Test is ended***\n\n");

	reset = 0;
	@(negedge clk);

	
	$display ("\n\n*** Random Functionality Tests for multiplier with unsigned inputs are applied***\n\n");
	repeat (600) begin
	        @(posedge clk);
		a = $urandom( );
		b = $urandom( );
		acc_fir = $urandom( );
		expected_out = (a<<acc_fir) + (4096*b);
		display_stimulus();
		@(negedge clk);
		compare();
	end
	$display ("\n\n***Random Functionality Tests for multiplier with unsigned inputs are ended***\n\n");

	$display ("\n\n***Directed Functionality Test for multiplier is applied***\n\n");
	@(negedge clk);
	a = 20'd255;
	b = 18'd1;
	acc_fir =6'h1;
	expected_out = (a<<acc_fir) + (4096*b);
	display_stimulus();
	@(posedge clk);
	compare();
	$display ("\n\n***Directed Functionality Test for multiplier is ended***\n\n");

		$display ("\n\n***Directed Functionality Test for multiplier is applied***\n\n");
	@(negedge clk);
	a = 20'd255;
	b = 18'd1;
	acc_fir =6'h1;
	expected_out = (a<<acc_fir) + (4096*b);
	display_stimulus();
	@(posedge clk);
	compare();
	$display ("\n\n***Directed Functionality Test for multiplier is ended***\n\n");

	$display ("\n\n***Directed Functionality Test for multiplier is applied***\n\n");
	@(negedge clk);
	a = 20'd255;
	b = 18'd1;
	acc_fir =6'h1;
	expected_out = (a<<acc_fir) + (4096*b);
	display_stimulus();
	@(posedge clk);
	compare();
	$display ("\n\n***Directed Functionality Test for multiplier is ended***\n\n");

	$display ("\n\n***Directed Functionality Test for multiplier is applied***\n\n");
	@(negedge clk);
	a = 20'hfffff;
	b = 18'h3ffff;
	acc_fir =6'h3f;
	expected_out = (a<<acc_fir) + (4096*b);
	display_stimulus();
	@(posedge clk);
	compare();
	$display ("\n\n***Directed Functionality Test for multiplier is ended***\n\n");
	#100;
	if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nError: Simulation Failed", mismatch);
	$finish;
	end
	

task compare();
 	$display("*** Comparing ***");
  	if ((z_out !== z_out_netlist) || (z_out_netlist !== expected_out) || (z_out !== expected_out)) begin
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