create_design litedram_top
target_device GEMINI

add_design_file -V_2001 ./benchmark/BUFG.v \
	./benchmark/IDELAYCTRL.v \
	./benchmark/IOBUF.v \
	./benchmark/IOBUFDS.v \
	./benchmark/ISERDESE2.v \
	./benchmark/OBUFDS.v \
	./benchmark/OSERDESE2.v \
	./benchmark/litedram_core.v \
	./benchmark/litedram_top.v \
	./benchmark/serv_ctrl.v \
	./benchmark/serv_rf_top.v \
	./benchmark/serv_top.v 
set_top_module litedram_top 
set_limits bram 0
set_limits dsp 0
synthesize area
