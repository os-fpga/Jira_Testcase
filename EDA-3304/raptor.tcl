create_design clk_buf_primitive_inst
target_device 1VG28
add_include_path ./rtl
add_design_file ./rtl/clk_buf_primitive_inst.v
set_top_module clk_buf_primitive_inst
analyze
synthesize delay
setup_lec_sim
simulate gate icarus
packing
place
route
simulate pnr icarus
sta
power
bitstream 
