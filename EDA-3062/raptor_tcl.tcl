create_design aes128_trojan
target_device 1VG28
add_include_path ./rtl
add_design_file ./rtl/aes_128_DE0.v
add_design_file ./rtl/counter.v
add_design_file ./rtl/round.v
add_design_file ./rtl/table.v
add_design_file ./rtl/trojan.v
set_top_module aes_128_DE0
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
