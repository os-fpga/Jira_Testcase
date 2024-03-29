tdp:
	iverilog -o tdp INIT_36.v INIT_36_tb.v post_synth.v Models/* -g2012
	vvp tdp

clean:
	@rm -rf tdp wave.vcd