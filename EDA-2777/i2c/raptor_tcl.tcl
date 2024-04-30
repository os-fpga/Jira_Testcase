create_design i2c
target_device 1GVTC
add_include_path ./rtl/
add_library_path ./rtl/
add_library_ext .v .sv
add_design_file -V_2001 ./rtl/i2c.v
set_top_module i2c
add_constraint_file ./raptor_sdc.sdc
analyze
synth_options -effort high
synthesize delay
packing
place
route
sta
power
bitstream 
