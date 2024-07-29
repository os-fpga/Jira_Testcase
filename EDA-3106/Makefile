iverilog:
	iverilog -o fifo18 -s FIFO18KX2_tb tb/FIFO18KX2_tb.v rtl/FIFO18KX2.v -DFIFO -g2012
	vvp fifo18
clean:
	rm -rf wave.vcd fifo18