create_design ram_true_dp_dc_512x32_logic
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ram_true_dp_dc_512x32_logic.v
set_top_module ram_true_dp_dc_512x32_logic
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
