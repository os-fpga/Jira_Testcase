create_design top
#target_device 1VG28
target_device GEMINI_COMPACT_22x4
add_design_file ./top.v
set_top_module top
add_constraint_file top.sdc
analyze
synthesize
packing
place
route
sta
power
#bitstream write_xml
assembler