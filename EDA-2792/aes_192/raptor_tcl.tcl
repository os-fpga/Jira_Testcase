create_design aes_192
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file -V_2001 ./rtl/table.v
add_design_file -V_2001 ./rtl/round.v
add_design_file -V_2001 ./rtl/aes_192.v
set_top_module aes_192
add_constraint_file constraint.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
