create_design ram_true_dp_dc_512x32
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ram_true_dp_dc_512x32.v
set_top_module ram_true_dp_dc_512x32
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
