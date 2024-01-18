create_design gpio_and
target_device 1GE100-ES1
add_design_file -SV_2017 rtl/gpio_and.v
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
