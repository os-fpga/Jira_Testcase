`timescale 1ns/1ps
module co_sim_dragonball_wbmaster_top;
// Clock signals
    reg			clk;
// Reset signals
    reg			reset_n;

    reg 		[9:0] 		a;
    wire 		[9:0] 		adr_o	,	adr_o_netlist;
    wire 		[15:0] 		dat_o	,	dat_o_netlist;
    reg 		[15:0] 		dat_i;
    wire 		[15:0] 		d;
    reg  		[15:0] 		inout_drv_d;
    wire		[15:0] 		inout_rcv_d;
    wire 		[1:0] 		sel_o	,	sel_o_netlist;
    reg 		ack_i;
    wire 		berr	,	berr_netlist;
    wire 		clk_o	,	clk_o_netlist;
    reg 		cs_n;
    wire 		cyc_o	,	cyc_o_netlist;
    wire 		dtack_n	,	dtack_n_netlist;
    reg 		err_i;
    reg 		lwe_n;
    reg 		oe_n;
    wire 		rst_o	,	rst_o_netlist;
    wire 		stb_o	,	stb_o_netlist;
    reg 		uwe_n;
    wire 		we_o	,	we_o_netlist;
	integer		mismatch	=	0;

dragonball_wbmaster_top	golden (.*);

`ifdef PNR
	dragonball_wbmaster_top_post_route route_net (.*, .adr_o(adr_o_netlist), .dat_o(dat_o_netlist), .sel_o(sel_o_netlist), .berr(berr_netlist), .clk_o(clk_o_netlist), .cyc_o(cyc_o_netlist), .dtack_n(dtack_n_netlist), .rst_o(rst_o_netlist), .stb_o(stb_o_netlist), .we_o(we_o_netlist) );
`else
	dragonball_wbmaster_top_post_synth synth_net (.*, .adr_o(adr_o_netlist), .dat_o(dat_o_netlist), .sel_o(sel_o_netlist), .berr(berr_netlist), .clk_o(clk_o_netlist), .cyc_o(cyc_o_netlist), .dtack_n(dtack_n_netlist), .rst_o(rst_o_netlist), .stb_o(stb_o_netlist), .we_o(we_o_netlist) );
`endif

assign	d = inout_drv_d;
assign	inout_rcv_d = d;

// clock initialization for clk
initial begin
	clk = 1'b0;
	forever #1 clk = ~clk;
end
//Reset Stimulus generation
initial begin
	inout_drv_d = 'bz;
	reset_n <= 0;
	@(negedge clk);
	{a, dat_i, ack_i, cs_n, err_i, lwe_n, oe_n, uwe_n, inout_drv_d } <= 'd0;
	reset_n <= 1;
	@(negedge clk);
	$display ("***Reset Test is applied***");
	@(negedge clk);
	@(negedge clk);
	compare();
	$display ("***Reset Test is ended***");
	//Random stimulus generation
	repeat(100) @ (negedge clk) begin
		a                    <= $urandom();
		dat_i                <= $urandom();
		ack_i                <= $urandom();
		cs_n                 <= $urandom();
		err_i                <= $urandom();
		lwe_n                <= $urandom();
		oe_n                 <= $urandom();
		uwe_n                <= $urandom();
		inout_drv_d          <= $urandom();
		compare();
end

	// ----------- Corner Case stimulus generation -----------
	a                      <= 1023;
	dat_i                  <= 65535;
	ack_i                  <= 1;
	cs_n                   <= 1;
	err_i                  <= 1;
	lwe_n                  <= 1;
	oe_n                   <= 1;
	uwe_n                  <= 1;
	inout_drv_d            <= 65535;
	compare();

	if(mismatch == 0)
		$display("**** All Comparison Matched *** \n		Simulation Passed\n");
	else
		$display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
	repeat(200) @(posedge clk);
	$finish;
end

task compare();
	if ( adr_o !== adr_o_netlist	||	dat_o !== dat_o_netlist	||	sel_o !== sel_o_netlist	||	berr !== berr_netlist	||	clk_o !== clk_o_netlist	||	cyc_o !== cyc_o_netlist	||	dtack_n !== dtack_n_netlist	||	rst_o !== rst_o_netlist	||	stb_o !== stb_o_netlist	||	we_o !== we_o_netlist ) begin
		$display("Data Mismatch: Actual output: %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, Netlist Output %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, Time: %0t ", adr_o, dat_o, sel_o, berr, clk_o, cyc_o, dtack_n, rst_o, stb_o, we_o, adr_o_netlist, dat_o_netlist, sel_o_netlist, berr_netlist, clk_o_netlist, cyc_o_netlist, dtack_n_netlist, rst_o_netlist, stb_o_netlist, we_o_netlist,  $time);
		mismatch = mismatch+1;
	end
	else
		$display("Data Matched: Actual output: %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, Netlist Output %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, Time: %0t ", adr_o, dat_o, sel_o, berr, clk_o, cyc_o, dtack_n, rst_o, stb_o, we_o, adr_o_netlist, dat_o_netlist, sel_o_netlist, berr_netlist, clk_o_netlist, cyc_o_netlist, dtack_n_netlist, rst_o_netlist, stb_o_netlist, we_o_netlist,  $time);
endtask

initial begin
	$dumpfile("tb.vcd");
	$dumpvars;
end

endmodule
