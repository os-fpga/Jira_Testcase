create_design rams_reg_io_sp_dc_16384x8
target_device 1GVTC
add_design_file ./rtl/rams_reg_io_sp_dc_16384x8.v
set_top_module rams_reg_io_sp_dc_16384x8
analyze
synth_options -new_tdp36k 
synthesize delay
packing
place
route
sta
power
bitstream 
