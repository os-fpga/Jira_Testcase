create_design vexriscv_uart
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/vexriscv_uart.v
set_top_module vexriscv_uart
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
