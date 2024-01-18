create_design axi_fifo_wrapper
target_device GEMINI_COMPACT_104x68
configure_ip axi_fifo_v1_0 -mod_name axi_fifo_wrapper -Pdata_width=32 -Paddr_width=32 -Pid_width=1 -Paw_user_en=0 -Paw_user_width=1 -Pw_user_en=0 -Pw_user_width=1 -Pb_user_en=0 -Pb_user_width=1 -Par_user_en=0 -Par_user_width=1 -Pr_user_en=0 -Pr_user_width=1 -Pwrite_fifo_depth=0 -Pread_fifo_depth=0 -Pwrite_fifo_delay=0 -Pread_fifo_delay=0 -out_file ./axi_fifo_wrapper/axi_fifo_wrapper.IPs/axi_fifo_wrapper
ipgenerate
add_library_path ./axi_fifo_wrapper/axi_fifo_wrapper.IPs/rapidsilicon/ip/axi_fifo/v1_0/axi_fifo_wrapper/src/
add_design_file ./axi_fifo_wrapper/axi_fifo_wrapper.IPs/rapidsilicon/ip/axi_fifo/v1_0/axi_fifo_wrapper/src/axi_fifo_wrapper.v
set_top_module axi_fifo_wrapper
analyze
simulate_ip axi_fifo_wrapper
synthesize delay
pin_loc_assign_method free
packing
global_placement
place
route
sta
power
bitstream 
