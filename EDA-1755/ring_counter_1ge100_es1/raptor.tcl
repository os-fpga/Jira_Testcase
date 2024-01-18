create_design ring_counter
target_device 1GE100-ES1
add_design_file ring_counter.v
set_top_module ring_counter
analyze
synthesize
packing
place
route
sta
power
bitstream
