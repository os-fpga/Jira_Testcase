create_design clk_buf_primitive_inst
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/clk_buf_primitive_inst.v
set_top_module clk_buf_primitive_inst
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
