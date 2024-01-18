create_design soc_fpga_intf_axi_m0
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/soc_fpga_intf_axi_m0.v
set_top_module soc_fpga_intf_axi_m0
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
