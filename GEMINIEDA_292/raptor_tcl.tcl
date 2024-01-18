target_device GEMINI
create_design Trivium_Module
add_include_path ./rtl
add_design_file ./rtl/Key_Sequence_Module.vhd
add_design_file ./rtl/Trivium_Module.vhd
set_top_module Trivium_Module
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
