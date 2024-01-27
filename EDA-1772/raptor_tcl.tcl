create_design vex_soc
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/uart_defines.vh
add_design_file ./rtl/vex_soc.v
set_top_module vex_soc
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
