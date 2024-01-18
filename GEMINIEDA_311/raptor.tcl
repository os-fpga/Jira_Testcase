create_design sdcard_mass_storage_controller_fifo

target_device GEMINI


add_design_file -V_2001 ./benchmark/sd_fifo.v \
			./benchmark/sd_data_phy.v \
			./benchmark/versatile_fifo_dptam_dw.v \
			./benchmark/sd_crc_16.v \
			./benchmark/sd_controller_fifo_actel.v \
			./benchmark/sd_defines.v \
			./benchmark/versatile_fifo_async_cmp.v \
			./benchmark/sd_counter.v \
			./benchmark/sd_crc_7.v \
			./benchmark/sd_cmd_phy.v \
			./benchmark/sd_controller_fifo_wb.v 



set_top_module sd_fifo

synth_options -no_simplify
set_limits dsp 0
set_limits bram 0

synthesize area
