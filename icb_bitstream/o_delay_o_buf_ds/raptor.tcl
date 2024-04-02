create_design o_delay_o_buf_ds
add_design_file o_delay_o_buf_ds.v
set_top_module o_delay_o_buf_ds
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