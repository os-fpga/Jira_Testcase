`timescale 1ns/1ps
module co_sim_stereovision2;
// Clock signals
    reg			tm3_clk_v0;
// Reset signals
    reg			reset;

    wire 		[7:0] 		vidin_rgb_reg_fifo_left	,	vidin_rgb_reg_fifo_left_netlist;
    wire 		[18:0] 		offchip_sram_addr	,	offchip_sram_addr_netlist;
    reg 		[7:0] 		vidin_rgb_reg;
    wire 		[7:0] 		offchip_sram_we	,	offchip_sram_we_netlist;
    reg 		[63:0] 		offchip_sram_data_in;
    wire 		[63:0] 		offchip_sram_data_out	,	offchip_sram_data_out_netlist;
    wire 		[15:0] 		bus_word_4_2to1	,	bus_word_4_2to1_netlist;
    reg 		[7:0] 		v_d_reg_s1_left_2to0;
    reg 		[18:0] 		vidin_addr_reg;
    wire 		[7:0] 		vidin_rgb_reg_fifo_right	,	vidin_rgb_reg_fifo_right_netlist;
    wire 		[15:0] 		bus_word_6_2to1	,	bus_word_6_2to1_netlist;
    reg 		[7:0] 		v_d_reg_s1_right_2to0;
    wire 		[2:0] 		counter_out_2to1	,	counter_out_2to1_netlist;
    wire 		[15:0] 		bus_word_3_2to1	,	bus_word_3_2to1_netlist;
    wire 		[15:0] 		bus_word_5_2to1	,	bus_word_5_2to1_netlist;
    wire 		[3:0] 		vidin_addr_reg_2to0	,	vidin_addr_reg_2to0_netlist;
    reg 		[7:0] 		v_d_reg_s4_left_2to0;
    reg 		[7:0] 		v_d_reg_s2_right_2to0;
    reg 		[7:0] 		v_d_reg_s2_left_2to0;
    wire 		[1:0] 		offchip_sram_oe	,	offchip_sram_oe_netlist;
    reg 		[7:0] 		v_d_reg_s4_right_2to0;
    reg 		svid_comp_switch;
    wire 		tm3_sram_adsp	,	tm3_sram_adsp_netlist;
    reg 		v_nd_s1_left_2to0;
    reg 		v_nd_s1_right_2to0;
    reg 		v_nd_s2_left_2to0;
    reg 		v_nd_s2_right_2to0;
    reg 		v_nd_s4_left_2to0;
    reg 		v_nd_s4_right_2to0;
    reg 		vidin_new_data;
    wire 		vidin_new_data_fifo	,	vidin_new_data_fifo_netlist;
	integer		mismatch	=	0;

stereovision2	golden (.*);

`ifdef PNR_SIM
	stereovision2_post_route route_net (.*, .vidin_rgb_reg_fifo_left(vidin_rgb_reg_fifo_left_netlist), .offchip_sram_addr(offchip_sram_addr_netlist), .offchip_sram_we(offchip_sram_we_netlist), .offchip_sram_data_out(offchip_sram_data_out_netlist), .bus_word_4_2to1(bus_word_4_2to1_netlist), .vidin_rgb_reg_fifo_right(vidin_rgb_reg_fifo_right_netlist), .bus_word_6_2to1(bus_word_6_2to1_netlist), .counter_out_2to1(counter_out_2to1_netlist), .bus_word_3_2to1(bus_word_3_2to1_netlist), .bus_word_5_2to1(bus_word_5_2to1_netlist), .vidin_addr_reg_2to0(vidin_addr_reg_2to0_netlist), .offchip_sram_oe(offchip_sram_oe_netlist), .tm3_sram_adsp(tm3_sram_adsp_netlist), .vidin_new_data_fifo(vidin_new_data_fifo_netlist) );
`else
	stereovision2_post_synth synth_net (.*, .vidin_rgb_reg_fifo_left(vidin_rgb_reg_fifo_left_netlist), .offchip_sram_addr(offchip_sram_addr_netlist), .offchip_sram_we(offchip_sram_we_netlist), .offchip_sram_data_out(offchip_sram_data_out_netlist), .bus_word_4_2to1(bus_word_4_2to1_netlist), .vidin_rgb_reg_fifo_right(vidin_rgb_reg_fifo_right_netlist), .bus_word_6_2to1(bus_word_6_2to1_netlist), .counter_out_2to1(counter_out_2to1_netlist), .bus_word_3_2to1(bus_word_3_2to1_netlist), .bus_word_5_2to1(bus_word_5_2to1_netlist), .vidin_addr_reg_2to0(vidin_addr_reg_2to0_netlist), .offchip_sram_oe(offchip_sram_oe_netlist), .tm3_sram_adsp(tm3_sram_adsp_netlist), .vidin_new_data_fifo(vidin_new_data_fifo_netlist) );
`endif

`ifdef TIMED_SIM
	initial begin
		$display("SDF ANNOTATION: ../routing/fabric_stereovision2_post_route.sdf");
		$sdf_annotate("../routing/fabric_stereovision2_post_route.sdf", co_sim_stereovision2.route_net.fabric_instance);
	end
`endif

// clock initialization for tm3_clk_v0
initial begin
	tm3_clk_v0 = 1'b0;
	forever #5.0 tm3_clk_v0 = ~tm3_clk_v0;
end
//Reset Stimulus generation
initial begin

// // Initialization for auto_498
// 	for (integer i = 0; i < 8; i++)  begin
// 		golden.auto_498[i] = 'b0;
// 	end

	$display ("***Reset Test is applied***");
	reset <= 0;
	{vidin_rgb_reg, offchip_sram_data_in, v_d_reg_s1_left_2to0, vidin_addr_reg, v_d_reg_s1_right_2to0, v_d_reg_s4_left_2to0, v_d_reg_s2_right_2to0, v_d_reg_s2_left_2to0, v_d_reg_s4_right_2to0, svid_comp_switch, v_nd_s1_left_2to0, v_nd_s1_right_2to0, v_nd_s2_left_2to0, v_nd_s2_right_2to0, v_nd_s4_left_2to0, v_nd_s4_right_2to0, vidin_new_data } <= 'd0;
	repeat (2) @(negedge tm3_clk_v0);
	reset <= 1;
	@(negedge tm3_clk_v0);
	compare();
	$display ("***Reset Test is ended***");
	//Random stimulus generation
	repeat(100) @ (negedge tm3_clk_v0) begin
		vidin_rgb_reg        <= $urandom();
		offchip_sram_data_in <= $urandom();
		v_d_reg_s1_left_2to0 <= $urandom();
		vidin_addr_reg       <= $urandom();
		v_d_reg_s1_right_2to0 <= $urandom();
		v_d_reg_s4_left_2to0 <= $urandom();
		v_d_reg_s2_right_2to0 <= $urandom();
		v_d_reg_s2_left_2to0 <= $urandom();
		v_d_reg_s4_right_2to0 <= $urandom();
		svid_comp_switch     <= $urandom();
		v_nd_s1_left_2to0    <= $urandom();
		v_nd_s1_right_2to0   <= $urandom();
		v_nd_s2_left_2to0    <= $urandom();
		v_nd_s2_right_2to0   <= $urandom();
		v_nd_s4_left_2to0    <= $urandom();
		v_nd_s4_right_2to0   <= $urandom();
		vidin_new_data       <= $urandom();
		compare();
end

	// ----------- Corner Case stimulus generation -----------
	repeat (2) @(negedge tm3_clk_v0);
	vidin_rgb_reg          <= 8'd255;
	offchip_sram_data_in   <= 64'd18446744073709551615;
	v_d_reg_s1_left_2to0   <= 8'd255;
	vidin_addr_reg         <= 19'd524287;
	v_d_reg_s1_right_2to0  <= 8'd255;
	v_d_reg_s4_left_2to0   <= 8'd255;
	v_d_reg_s2_right_2to0  <= 8'd255;
	v_d_reg_s2_left_2to0   <= 8'd255;
	v_d_reg_s4_right_2to0  <= 8'd255;
	svid_comp_switch       <= 1'd1;
	v_nd_s1_left_2to0      <= 1'd1;
	v_nd_s1_right_2to0     <= 1'd1;
	v_nd_s2_left_2to0      <= 1'd1;
	v_nd_s2_right_2to0     <= 1'd1;
	v_nd_s4_left_2to0      <= 1'd1;
	v_nd_s4_right_2to0     <= 1'd1;
	vidin_new_data         <= 1'd1;
	compare();

	if(mismatch == 0)
		$display("**** All Comparison Matched *** \n		Simulation Passed\n");
	else
		begin
		$display("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed", mismatch);
		$fatal(1);
		end
	repeat(200) @(posedge tm3_clk_v0);
	$finish;
end

task compare();
	if ( vidin_rgb_reg_fifo_left !== vidin_rgb_reg_fifo_left_netlist	||	offchip_sram_addr !== offchip_sram_addr_netlist	||	offchip_sram_we !== offchip_sram_we_netlist	||	offchip_sram_data_out !== offchip_sram_data_out_netlist	||	bus_word_4_2to1 !== bus_word_4_2to1_netlist	||	vidin_rgb_reg_fifo_right !== vidin_rgb_reg_fifo_right_netlist	||	bus_word_6_2to1 !== bus_word_6_2to1_netlist	||	counter_out_2to1 !== counter_out_2to1_netlist	||	bus_word_3_2to1 !== bus_word_3_2to1_netlist	||	bus_word_5_2to1 !== bus_word_5_2to1_netlist	||	vidin_addr_reg_2to0 !== vidin_addr_reg_2to0_netlist	||	offchip_sram_oe !== offchip_sram_oe_netlist	||	tm3_sram_adsp !== tm3_sram_adsp_netlist	||	vidin_new_data_fifo !== vidin_new_data_fifo_netlist ) begin
		$display("Data Mismatch: Actual output: %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, Netlist Output %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, Time: %0t ", vidin_rgb_reg_fifo_left, offchip_sram_addr, offchip_sram_we, offchip_sram_data_out, bus_word_4_2to1, vidin_rgb_reg_fifo_right, bus_word_6_2to1, counter_out_2to1, bus_word_3_2to1, bus_word_5_2to1, vidin_addr_reg_2to0, offchip_sram_oe, tm3_sram_adsp, vidin_new_data_fifo, vidin_rgb_reg_fifo_left_netlist, offchip_sram_addr_netlist, offchip_sram_we_netlist, offchip_sram_data_out_netlist, bus_word_4_2to1_netlist, vidin_rgb_reg_fifo_right_netlist, bus_word_6_2to1_netlist, counter_out_2to1_netlist, bus_word_3_2to1_netlist, bus_word_5_2to1_netlist, vidin_addr_reg_2to0_netlist, offchip_sram_oe_netlist, tm3_sram_adsp_netlist, vidin_new_data_fifo_netlist,  $time);
		mismatch = mismatch+1;
	end
	else
		$display("Data Matched: Actual output: %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, Netlist Output %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, %0d, Time: %0t ", vidin_rgb_reg_fifo_left, offchip_sram_addr, offchip_sram_we, offchip_sram_data_out, bus_word_4_2to1, vidin_rgb_reg_fifo_right, bus_word_6_2to1, counter_out_2to1, bus_word_3_2to1, bus_word_5_2to1, vidin_addr_reg_2to0, offchip_sram_oe, tm3_sram_adsp, vidin_new_data_fifo, vidin_rgb_reg_fifo_left_netlist, offchip_sram_addr_netlist, offchip_sram_we_netlist, offchip_sram_data_out_netlist, bus_word_4_2to1_netlist, vidin_rgb_reg_fifo_right_netlist, bus_word_6_2to1_netlist, counter_out_2to1_netlist, bus_word_3_2to1_netlist, bus_word_5_2to1_netlist, vidin_addr_reg_2to0_netlist, offchip_sram_oe_netlist, tm3_sram_adsp_netlist, vidin_new_data_fifo_netlist,  $time);
endtask

initial begin
	$dumpfile("tb.vcd");
	$dumpvars;
end

endmodule
