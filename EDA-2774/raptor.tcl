create_design top
target_device GEMINI_COMPACT_62x44
add_design_file top.v
add_constraint_file constraints.sdc

analyze
synthesize
packing
place
route
sta
bitstream
