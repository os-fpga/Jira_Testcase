create_design filt_ppi
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/filt_ppi.v
set_top_module filt_ppi
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
