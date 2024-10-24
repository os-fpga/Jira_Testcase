create_design alu_control_unit
target_device 1VG28
add_include_path ./rtl
add_design_file ./rtl/ctrl.v
set_top_module top
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
