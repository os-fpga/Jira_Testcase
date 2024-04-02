create_design filt_ppd
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/filt_ppd.v
set_top_module filt_ppd
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
