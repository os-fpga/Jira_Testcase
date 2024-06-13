verilator:
	verilator --main --exe --build --timing --trace -Wno-fatal -Wno-BLKLOOPINIT --top-module testbench -I tb/tb.v rtl/ocm.v rtl/TDP_RAM18KX2.v -DSIM_VERILATOR=1
	make -j -C obj_dir/ -f Vtestbench.mk Vtestbench && obj_dir/Vtestbench

iverilog:
	iverilog -o mem rtl/ocm.v tb/tb.v rtl/TDP_RAM18KX2.v -g2012 -DSIM_IVERILOG=1
	vvp mem

clean:
	rm -rf obj_dir/ verilator.vcd iverilog.vcd mem