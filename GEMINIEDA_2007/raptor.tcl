create_design async_counter
target_device GEMINI_COMPACT_104x68
add_design_file -VHDL_2019 ./rtl/top.vhd
set_top_module top
analyze
pnr_netlist_lang vhdl
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
