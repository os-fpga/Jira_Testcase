create_design ahb2ram
target_device GEMINI_COMPACT_10x8
add_design_file -SV_2017 rtl/ahb2ram.sv
#add_library_ext  .v .sv
set_top_module ahb2ram
synth_options -effort low -no_simplify
analyze
synthesize
packing
place
route
sta
power
bitstream write_xml