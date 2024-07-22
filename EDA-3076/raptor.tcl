create_design tiny_tate_bilinear_pairing
target_device 1VG28
add_include_path ./rtl/
add_design_file ./rtl/const.v
add_design_file ./rtl/cubic.v
add_design_file ./rtl/fsm.v
add_design_file ./rtl/pairing.v
add_design_file ./rtl/pe.v
add_design_file ./rtl/ram.v
add_design_file ./rtl/rom.v
add_design_file ./rtl/tiny.v
set_top_module pairing
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
