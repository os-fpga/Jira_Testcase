create_design i2c_master
target_device GEMINI_COMPACT_104x68
configure_ip i2c_master_v1_0 -mod_name i2c_master -Pdefault_prescale=1 -Pfixed_prescale=0 -Pcmd_fifo=1 -Pcmd_addr_width=5 -Pwrite_fifo=1 -Pwrite_addr_width=5 -Pread_fifo=1 -Pread_addr_width=5 -out_file ./i2c_master/i2c_master.IPs/i2c_master
ipgenerate
add_library_path ./i2c_master/i2c_master.IPs/rapidsilicon/ip/i2c_master/v1_0/i2c_master/src/
add_design_file ./i2c_master/i2c_master.IPs/rapidsilicon/ip/i2c_master/v1_0/i2c_master/src/i2c_master.v
set_top_module i2c_master
analyze
