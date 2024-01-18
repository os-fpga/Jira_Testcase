#!/usr/bin/tclsh
create_design ram_true_reg_addr_dp_512x64
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/ram_true_reg_addr_dp_512x64.v
set_top_module ram_true_reg_addr_dp_512x64
ipgenerate
synthesize delay
pnr_options --gen_post_synthesis_netlist on
set_device_size 78x66
packing
global_placement
place
route
sta
power
bitstream
