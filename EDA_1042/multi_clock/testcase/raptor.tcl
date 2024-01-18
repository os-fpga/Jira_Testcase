create_design multi_clock_sdc
target_device GEMINI
add_design_file ./top_reg.v
add_constraint_file ./constraints.sdc
set_top_module top_reg
synthesize delay
pnr_options --gen_post_synthesis_netlist on
bitstream_config_files -repack ./repack.xml
packing
global_placement
place
route
sta
power
bitstream -force 

