create_design ahb2ram
target_device GEMINI_COMPACT_62x44
add_design_file -SV_2017 ahb2ram.sv
#add_library_ext  .v .sv
set_top_module ahb2ram
add_constraint_file pin_constraint.pin
analyze
synthesize
packing
place
route
sta
power
bitstream
