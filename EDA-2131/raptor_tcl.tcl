create_design filt_mac_iverilog
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/filt_mac_iverilog.v
set_top_module filt_mac_iverilog
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
