create_design diff_buf
add_design_file diff_buf.v
set_top_module diff_buf
add_constraint_file pin_constraints.pin
target_device 1VG28

analyze
synthesize
packing
place
route
sta
bitstream