create_design FullAdder32
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/FullAdder32.v
set_top_module FullAdder32
add_constraint_file ./clk_constraint.sdc
add_constraint_file ./pin.pin
analyze
synthesize delay
packing
place
route
sta
power
bitstream