create_design leon3mp
target_device 1VG28
add_include_path ./rtl/
add_design_file ./rtl/GSCLib_3.0.v
add_design_file ./rtl/leon3mp.v
set_top_module leon3mp
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
