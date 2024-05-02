create_design and2
target_device 1VG28
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
bitstream write_xml

