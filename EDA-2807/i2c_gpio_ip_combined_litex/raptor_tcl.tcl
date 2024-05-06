create_design i2c_gpio_ip_combined_litex
target_device 1GVTC
add_include_path ./rtl
add_design_file ./rtl/picorv32.v
add_design_file ./rtl/sim.v
set_top_module sim
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
