create_design zbt_top
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_design_file ./rtl/zbt_top.vhd
set_top_module zbt_top
# pnr_netlist_lang verilog
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
