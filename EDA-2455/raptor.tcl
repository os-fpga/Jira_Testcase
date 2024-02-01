create_design ram_true_dp_dc_16384x9
target_device 1GVTC
add_design_file ./rtl/ram_true_dp_dc_16384x9.v
set_top_module ram_true_dp_dc_16384x9
add_constraint_file constraints.sdc
analyze
synth_options -new_tdp36k 
synthesize delay
packing
place
route
sta
power
bitstream 
