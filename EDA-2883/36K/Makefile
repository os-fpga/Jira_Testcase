verilator:
	verilator --main --exe --build --timing --trace -Wno-fatal -Wno-BLKLOOPINIT --top-module testbench -I tb/tb.v rtl/on_chip_memory_v1_0.v rtl/TDP_RAM36K.v -DSIM_VERILATOR=1
	make -j -C obj_dir/ -f Vtestbench.mk Vtestbench && obj_dir/Vtestbench

18K:
	verilator --main --exe --build --timing --trace -Wno-fatal -Wno-BLKLOOPINIT --top-module testbench -I tb_18K/tb.v rtl_18K/ocm_18K.v rtl_18K/TDP_RAM18KX2.v -DSIM_VERILATOR=1
	make -j -C obj_dir/ -f Vtestbench.mk Vtestbench && obj_dir/Vtestbench

iverilog:
	iverilog -o mem rtl/on_chip_memory_v1_0.v tb/tb.v rtl/TDP_RAM36K.v -g2012 -DSIM_IVERILOG=1
	vvp mem

clean:
	rm -rf obj_dir/ verilator.vcd iverilog.vcd mem