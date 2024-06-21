create_design i2clog
target_device 1VG28
add_include_path ./rtl/
add_design_file ./rtl/I2C_TrafficLogger.v
set_top_module I2CLog
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
