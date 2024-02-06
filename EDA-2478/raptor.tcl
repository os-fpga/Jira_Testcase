create_design ocm_sp_18x4096
target_device 1GVTC
configure_ip on_chip_memory_v1_0 -mod_name ocm_sp_18x4096 -Pmemory_type=Single_Port -Pdata_width=18 -Pwrite_depth=4096 -Pcommon_clk=1 -Pbram=1 -out_file ./ocm_sp_18x4096
ipgenerate
add_include_path ./rapidsilicon/ip/on_chip_memory/v1_0/ocm_sp_18x4096/src/
add_library_ext .v .sv
add_library_path rapidsilicon/ip/on_chip_memory/v1_0/ocm_sp_18x4096/src/
add_design_file ./rapidsilicon/ip/on_chip_memory/v1_0/ocm_sp_18x4096/src/ocm_sp_18x4096\_v1_0.v
set_top_module ocm_sp_18x4096
analyze
synth_options -new_tdp36k 
synthesize delay
packing
place
route
sta
power
bitstream 
