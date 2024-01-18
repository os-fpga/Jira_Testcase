synth:
	raptor --batch --script raptor.tcl
golden:
	vcs -sverilog -full64 ../tb/vex_soc.sv +incdir+../rtl +incdir+../tb/
validate:
	vcs -sverilog -full64 ../tb/vex_soc_validation.sv +incdir+../tb/ +incdir+../sim/vex_soc
sim:
	./simv
clean:
	rm -rf csrc raptor_cmd.tcl raptor.log raptor_perf.log simv simv.daidir tb.vcd ucli.key vcs.log vex_soc
