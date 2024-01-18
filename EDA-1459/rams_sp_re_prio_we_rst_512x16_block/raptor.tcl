create_design rams_sp_re_prio_we_rst_512x16_block
target_device GEMINI_COMPACT_82x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/rams_sp_re_prio_we_rst_512x16_block.v
set_top_module rams_sp_re_prio_we_rst_512x16_block
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
