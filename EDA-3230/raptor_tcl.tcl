create_design ram_true_dp_dc_16384x8
target_device 1VG28
add_design_file ./rtl/ram_true_dp_dc_16384x8.v
set_top_module ram_true_dp_dc_16384x8
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
