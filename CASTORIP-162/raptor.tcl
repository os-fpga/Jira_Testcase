# Design
create_design bit8_ring_counter_gemini
add_design_file -V_2001 bit8_ring_counter.v
set_top_module bit8_ring_counter
add_constraint_file pin_mapping.pin
add_constraint_file constraints.sdc

# Device target
target_device GEMINI
# Compilation
analyze
synthesize delay
packing
place
route
sta 
bitstream 
