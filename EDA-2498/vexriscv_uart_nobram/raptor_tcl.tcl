create_design vexriscv_uart
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/vexriscv_uart.v
set_top_module vexriscv_uart
analyze
set_limits bram 0
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
