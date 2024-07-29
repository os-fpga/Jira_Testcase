iverilog:
	iverilog -o fifo36 -s FIFO36K_tb tb/FIFO36K_tb.v rtl/FIFO36K.v -g2012
	vvp fifo36
clean:
	rm -rf wave.vcd fifo36