all:
	iverilog -o mem Primitive/TDP_RAM18KX2.v tb/TDP_RAM18KX2_tb.v -g2012 -DVCD
	vvp mem
output:
	gtkwave wave.vcd
clean:
	rm -rf wave.vcd mem