create_design and2
target_device GEMINI
add_design_file ./rtl/and2.v
add_constraint_file ./and2.pin
set_top_module and2
analyze
synthesize
packing
place
route
sta
power
bitstream

