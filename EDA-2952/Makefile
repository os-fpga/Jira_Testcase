all:
	iverilog -o iddr tb/I_DDR_tb.v Primitive/I_DDR.v -g2012 && vvp iddr

output:
	gtkwave I_DDR.vcd

clean:
	rm -rf I_DDR.vcd iddr