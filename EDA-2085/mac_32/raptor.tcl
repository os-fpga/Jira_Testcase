create_design mac_32
target_device GEMINI_COMPACT_10x8
add_design_file ./mac_32.v
set_top_module mac_32
pin_loc_assign_method free
analyze
synthesize
packing
place
route
sta
power
bitstream write_xml