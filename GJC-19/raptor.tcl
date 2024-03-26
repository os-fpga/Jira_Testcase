create_design i_delay_o_buf
add_design_file i_delay_o_buf.v
set_top_module i_delay_o_buf
# add_constraint_file constraints.sdc
add_constraint_file pin_constraints.pin
# Using 1VG28 instead of gemini 10x8 because 10x8 does not have enough IO pads for this design
target_device 1VG28

analyze
synthesize
packing
place
route
sta
bitstream