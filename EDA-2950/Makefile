all:
	iverilog -o oddr tb/O_DDR_tb.v Primitive/O_DDR.v -g2012 && vvp oddr

output:
	gtkwave O_DDR.vcd

clean:
	rm -rf O_DDR.vcd oddr