create_design ring_counter
target_device GEMINI_COMPACT_10x8
add_design_file rtl/ring_counter.v
set_top_module ring_counter
pin_loc_assign_method free
analyze
synthesize
packing
place
route
sta
power
bitstream
