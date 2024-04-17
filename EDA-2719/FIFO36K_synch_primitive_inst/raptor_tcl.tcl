create_design FIFO36K_synch_primitive_inst
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/FIFO36K_synch_primitive_inst.v
set_top_module FIFO36K_synch_primitive_inst
add_constraint_file ./constraint.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
