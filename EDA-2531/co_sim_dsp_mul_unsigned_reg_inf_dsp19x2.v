module co_sim_dsp_mul_unsigned_reg_inf_dsp19x2;
	reg  [19:0] A;
	reg  [17:0] B;
	reg clk, reset ;
	wire  [37:0] P;
	wire  [37:0] P_netlist;

	integer mismatch=0;

dsp_mul_unsigned_reg_inf_dsp19x2 golden(.*);
`ifdef PNR
dsp_mul_unsigned_reg_inf_dsp19x2_post_route pnr(clk ,
    reset ,
    A[0] ,
    A[1] ,
    A[2] ,
    A[3] ,
    A[4] ,
    A[5] ,
    A[6] ,
    A[7] ,
    A[8] ,
    A[9] ,
    A[10] ,
    A[11] ,
    A[12] ,
    A[13] ,
    A[14] ,
    A[15] ,
    A[16] ,
    A[17] ,
    A[18] ,
    A[19] ,
    B[0] ,
    B[1] ,
    B[2] ,
    B[3] ,
    B[4] ,
    B[5] ,
    B[6] ,
    B[7] ,
    B[8] ,
    B[9] ,
    B[10] ,
    B[11] ,
    B[12] ,
    B[13] ,
    B[14] ,
    B[15] ,
    B[16] ,
    B[17] ,
    P_netlist[0] ,
    P_netlist[1] ,
    P_netlist[2] ,
    P_netlist[3] ,
    P_netlist[4] ,
    P_netlist[5] ,
    P_netlist[6] ,
    P_netlist[7] ,
    P_netlist[8] ,
    P_netlist[9] ,
    P_netlist[10] ,
    P_netlist[11] ,
    P_netlist[12] ,
    P_netlist[13] ,
    P_netlist[14] ,
    P_netlist[15] ,
    P_netlist[16] ,
    P_netlist[17] ,
    P_netlist[18] ,
    P_netlist[32] ,
    P_netlist[33] ,
    P_netlist[34] ,
    P_netlist[35] ,
    P_netlist[36] ,
    P_netlist[37] ,
    P_netlist[19] ,
    P_netlist[20] ,
    P_netlist[21] ,
    P_netlist[22] ,
    P_netlist[23] ,
    P_netlist[24] ,
    P_netlist[25] ,
    P_netlist[26] ,
    P_netlist[27] ,
    P_netlist[28] ,
    P_netlist[29] ,
    P_netlist[30] ,
    P_netlist[31] );
		`else
dsp_mul_unsigned_reg_inf_dsp19x2 netlist(.*,.P(P_netlist));
`endif

//clock initialization
initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
end
initial begin
	reset = 0;
	@(negedge clk);
	reset = 1;
	A[19:10]=0;
	A[9:0]=0;
	B[17:9]=0;
	B[8:0]=0;
	$display ("\n\n***Reset Test is applied***\n\n");
	display_stimulus();
	@(negedge clk);
	@(negedge clk);
	compare();
	$display ("\n\n***Reset Test is ended***\n\n");

	reset = 1;
	@(negedge clk);

	$display ("\n\n*** Random Functionality Tests for multiplier with signed inputs are applied***\n\n");
	repeat (1000) begin
		A[19:10] = $urandom( );
		B[17:9] = $urandom( );
		A[9:0] = $urandom( );
		B[8:0] = $urandom( );
		display_stimulus();
		@(negedge clk);
		@(negedge clk);
		compare();
	end
	$display ("\n\n***Random Functionality Tests for multiplier with signed inputs are ended***\n\n");

	reset =1;
	A[19:10]=0;
	B[17:9]=0;
	A[9:0]=0;
	B[8:0]=0;
	$display ("\n\n***Reset Test is applied***\n\n");
	display_stimulus();
	@(negedge clk);
	@(negedge clk);
	compare();
	$display ("\n\n***Reset Test is ended***\n\n");
	
	reset=0;
	@(negedge clk);
	$display ("\n\n***Reset Value is set zero again***\n\n");

	$display ("\n\n***Directed Functionality Test for multiplier is applied***\n\n");
	A[19:10] = 10'hff;
	B[17:9] = 9'h3f;
	A[9:0] = 10'hff;
	B[8:0] = 9'h3f;
	display_stimulus();
	@(negedge clk);
	@(negedge clk);
	compare();
	$display ("\n\n***Directed Functionality Test for multiplier is ended***\n\n");
	
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
	$display ($time,," Test stimulus is: A[19:10]=%0d, B[17:9]=%0d", A[19:10], B[17:9]);
	$display ($time,," Test stimulus is: A[9:0]=%0d, B[8:0]=%0d", A[9:0], B[8:0]);
endtask

initial begin
    $dumpfile("tb.vcd");
    $dumpvars;
end
endmodule 
