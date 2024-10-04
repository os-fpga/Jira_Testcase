create_design primitive_example_design_7
target_device 1VG28
add_include_path ./rtl
add_design_file ./rtl/primitive_example_design_7.v
set_top_module primitive_example_design_7
add_constraint_file clk_constraint.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
