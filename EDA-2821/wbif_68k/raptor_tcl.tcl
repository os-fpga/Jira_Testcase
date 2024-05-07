create_design wbif_68k
target_device 1GVTC
add_include_path ./rtl/
add_design_file ./rtl/dragonball_wbmaster_top.v
set_top_module dragonball_wbmaster_top
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
