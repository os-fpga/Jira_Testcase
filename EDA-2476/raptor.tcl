create_design axis_async_fifo_wrapper
target_device GEMINI_COMPACT_104x68
configure_ip axis_async_fifo_v1_0 -mod_name axis_async_fifo_wrapper -Pdepth=8 -Pdata_width=8 -Plast_en=1 -Pid_en=0 -Pid_width=8 -Pdest_en=0 -Pdest_width=8 -Puser_en=1 -Puser_width=1 -Pram_pipeline=2 -Pframe_fifo=0 -Pdrop_bad_frame=0 -Pdrop_when_full=0 -out_file ./axis_async_fifo_wrapper/run_1/IPs/axis_async_fifo_wrapper
ipgenerate
add_library_path ./axis_async_fifo_wrapper/run_1/IPs/rapidsilicon/ip/axis_async_fifo/v1_0/axis_async_fifo_wrapper/src/
add_design_file ./axis_async_fifo_wrapper/run_1/IPs/rapidsilicon/ip/axis_async_fifo/v1_0/axis_async_fifo_wrapper/src/axis_async_fifo_wrapper_v1_0.v
set_top_module axis_async_fifo_wrapper
add_constraint_file constraints.sdc
analyze
simulate_ip axis_async_fifo_wrapper
synth_options -new_tdp36k 
synthesize delay
packing
place
route
sta
power
bitstream 
