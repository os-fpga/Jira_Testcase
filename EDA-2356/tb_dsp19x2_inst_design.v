module tb_dsp19x2_inst_design;
	reg  [9:0] a1;
	reg  [8:0] b1;
    reg  [9:0] a2;
	reg  [8:0] b2;
	reg clk, reset;
	wire  [18:0] z_out1;
    wire  [18:0] z_out2;
	reg  [18:0] expected_out1;
    reg [18:0] multiple1;
    reg [18:0] multiple_acc1;
    reg  [18:0] expected_out2;
    reg [18:0] multiple2;
    reg [18:0] multiple_acc2;

integer mismatch =0;
`ifdef PNR
		dsp19x2_inst_design dsp_inst( 
            b[0],
            b[1],
            b[2],
            b[3],
            b[4] ,
            b[5] ,
            b[6] ,
            b[7] ,
            b[8] ,
            b[9] ,
            b[10] ,
            b[11] ,
            b[12] ,
            b[13] ,
            b[14] ,
            b[15] ,
            b[16] ,
            b[17] ,
            clk ,
            reset ,
            a[0] ,
            a[1] ,
            a[2] ,
            a[3] ,
            a[4] ,
            a[5] ,
            a[6] ,
            a[7] ,
            a[8] ,
            a[9] ,
            a[10] ,
            a[11] ,
            a[12] ,
            a[13] ,
            a[14] ,
            a[15] ,
            a[16] ,
            a[17] ,
            a[18] ,
            a[19] ,
            z_out[0] ,
            z_out[1] ,
            z_out[2] ,
            z_out[3] ,
            z_out[4] ,
            z_out[5] ,
            z_out[6] ,
            z_out[7] ,
            z_out[8] ,
            z_out[9] ,
            z_out[10] ,
            z_out[11] ,
            z_out[12] ,
            z_out[13] ,
            z_out[14] ,
            z_out[15] ,
            z_out[16] ,
            z_out[17] ,
            z_out[18] ,
            z_out[19] ,
            z_out[20] ,
            z_out[21] ,
            z_out[22] ,
            z_out[23] ,
            z_out[24] ,
            z_out[25] ,
            z_out[26] ,
            z_out[27] ,
            z_out[28] ,
            z_out[29] ,
            z_out[30] ,
            z_out[31] ,
            z_out[32] ,
            z_out[33] ,
            z_out[34] ,
            z_out[35] ,
            z_out[36] ,
            z_out[37] 
        );
`else
   	dsp19x2_inst_design inst(.*);
`endif

//clock initialization
initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
end
initial begin
	{reset, a1, b1, expected_out1, multiple_acc1, multiple1, a2, b2, expected_out2, multiple_acc2, multiple2}= 'd0;
	@(negedge clk);
	reset = 1;
	$display ("\n\n***Reset Test is applied***\n\n");
	display_stimulus1();
    display_stimulus2();
	@(negedge clk);
	@(negedge clk);
	compare1();
    compare2();
	$display ("\n\n***Reset Test is ended***\n\n");

	reset = 0;
	@(negedge clk);

	$display ("\n\n***Directed Functionality Test is applied for z_out1 = z_out1 + a1*b1***\n\n");
    $display ("\n\n***Directed Functionality Test is applied for z_out2 = z_out2 + a2*b2***\n\n");
	a1 = 10'hFF;
	b1 = 9'h7F;
    a2 = 10'hFF;
	b2 = 9'h7F;
	display_stimulus1();
    display_stimulus2();
	@(posedge clk);
    multiple1 = a1*b1;
    multiple_acc1 = multiple1 + multiple_acc1;
	expected_out1 = multiple_acc1 & (multiple1);
    multiple2 = a2*b2;
    multiple_acc2 = multiple2 + multiple_acc2;
	expected_out2 = multiple_acc2 & (multiple2);
	@(negedge clk);
	compare1();
    compare2();
	$display ("\n\n***Directed Functionality Test for z_out1 = z_out1 + a1*b1 is ended***\n\n");
    $display ("\n\n***Directed Functionality Test for z_out2 = z_out2 + a2*b2 is ended***\n\n");

	
	$display ("\n\n*** Random Functionality Tests with random inputs are applied for z_out1 = z_out1 + a1*b1***\n\n");
    $display ("\n\n*** Random Functionality Tests with random inputs are applied for z_out2 = z_out2 + a2*b2***\n\n");
	
	repeat (600) begin
		a1 = $urandom( );
		b1 = $urandom( );
        a2 = $urandom( );
		b2 = $urandom( );
		display_stimulus1();
        display_stimulus2();
	        @(posedge clk);
            multiple1 = a1*b1;
            multiple_acc1 = multiple1 + multiple_acc1;
	        expected_out1 = multiple_acc1 & (multiple1);
            multiple2 = a2*b2;
            multiple_acc2 = multiple2 + multiple_acc2;
	        expected_out2 = multiple_acc2 & (multiple2);
	        @(negedge clk);
	        compare1();
            compare2();
	end
	$display ("\n\n***Random Functionality Tests with random inputs for z_out1 = z_out1 + a1*b1 are ended***\n\n");
    $display ("\n\n***Random Functionality Tests with random inputs for z_out2 = z_out2 + a2*b2 are ended***\n\n");

    if(mismatch == 0)
        $display("\n**** All Comparison Matched ***\nSimulation Passed");
    else
        $display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
	$finish;
end
	

task compare1();
 	
  	if(z_out1 !== expected_out1 || z_out1 !== expected_out1) begin
    	$display("Data Mismatch. Golden RTL1: %0d, Expected output1: %0d, Time: %0t", z_out1, expected_out1, $time);
    	mismatch = mismatch+1;
 	end
  	else
  		$display("Data Matched. Golden RTL1: %0d, Expected output1: %0d, Time: %0t", z_out1, expected_out1, $time);
endtask
task compare2();
    if(z_out2 !== expected_out2 || z_out2 !== expected_out2) begin
    	$display("Data Mismatch. Golden RTL2: %0d, Expected output2: %0d, Time: %0t", z_out2, expected_out2, $time);
    	mismatch = mismatch+1;
 	end
  	else
  		$display("Data Matched. Golden RTL2: %0d, Expected output2: %0d, Time: %0t", z_out2, expected_out2, $time);
endtask

task display_stimulus1();
	$display ($time,," Test stimulus is: a1=%0d, b1=%0d", a1, b1);
endtask
task display_stimulus2();
    $display ($time,," Test stimulus is: a2=%0d, b2=%0d", a2, b2);
endtask

initial begin
    `ifdef PNR
        $dumpfile("dsp19x2_pnr.vcd");
    `elsif GATE
        $dumpfile("dsp19x2_gate.vcd");
    `else
        $dumpfile("dsp19x2_rtl.vcd");
    `endif
    $dumpvars;
end
endmodule