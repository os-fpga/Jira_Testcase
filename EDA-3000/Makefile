verilator_run:
	verilator --main --exe --build --timing --trace -Wno-fatal -Wno-BLKLOOPINIT --top-module co_sim_ram_true_dp_dc_512x32_logic -I rtl/*.v sim/co_sim_tb/*.v sim_models/*.v synth-netlist/*.v -DSIM_VERILATOR=1
	make -j -C obj_dir/ -f Vco_sim_ram_true_dp_dc_512x32_logic.mk Vco_sim_ram_true_dp_dc_512x32_logic && obj_dir/Vco_sim_ram_true_dp_dc_512x32_logic

iverilog_run:
	iverilog -o test rtl/*.v sim/co_sim_tb/*.v sim_models/*.v  synth-netlist/*.v -g2012 -DSIM_IVERILOG=1
	vvp test

clean:
	rm -rf obj_dir/ tb.vcd tb.fst test 
