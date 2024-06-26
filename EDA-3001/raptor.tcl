create_design and2
target_device GEMINI_COMPACT_22x4
add_design_file ./and2.v
set_top_module and2
add_constraint_file and2.pin
analyze
synthesize
packing
place
route
sta
power
bitstream
