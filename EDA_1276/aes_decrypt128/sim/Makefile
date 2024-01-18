# Cross Compiler
CC=vcs
# Compilation Flags
FLAGS=-full64 -sverilog -debug_access+all


comp_no_synth_flags:
	$(CC) $(FLAGS) ../tb/aes_decrypt128_tb.sv +incdir+../rtl_no_synth_flags +incdir+../tb
comp_synth_flags:
	$(CC) $(FLAGS) ../tb/aes_decrypt128_tb.sv +incdir+../rtl_synth_flags +incdir+../tb
comp_validate:
	$(CC) $(FLAGS) ../tb/aes_decrypt128_tb_validate_netlist.sv +incdir+./aes_decrypt128 +incdir+../tb
sim: simv
	./simv > output.log


raptor_synth_flags:
	raptor --batch --script raptor_synth_flags.tcl
raptor_no_synth_flags:
	raptor --batch --script raptor_no_synth_flags.tcl


clean:
	rm -rf simv.daidir csrc ucli.key simv vcs.log raptor_perf.log raptor_cmd.tcl raptor.log ./aes_decrypt128
