create_design gpio_and
target_device GEMINI_COMPACT_104x68
add_design_file -SV_2017 gpio_and.v
#add_library_ext  .v .sv
set_top_module gpio_and
add_constraint_file pin_constraints.pin
analyze
synthesize
packing
place
route
sta
power
bitstream write_xml