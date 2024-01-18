create_design axi_cdma_wrapper
target_device GEMINI_COMPACT_104x68
configure_ip axi_cdma_v1_0 -mod_name axi_cdma_wrapper -Pdata_width=32 -Paddr_width=16 -Pid_width=8 -Paxi_max_burst_len=16 -Plen_width=20 -Ptag_width=8 -Penable_unaligned=0 -out_file ./axi_cdma_wrapper/axi_cdma_wrapper.IPs/axi_cdma_wrapper
ipgenerate
add_library_path ./axi_cdma_wrapper/axi_cdma_wrapper.IPs/rapidsilicon/ip/axi_cdma/v1_0/axi_cdma_wrapper/src/
add_design_file ./axi_cdma_wrapper/axi_cdma_wrapper.IPs/rapidsilicon/ip/axi_cdma/v1_0/axi_cdma_wrapper/src/axi_cdma_wrapper.v
set_top_module axi_cdma_wrapper
analyze
simulate_ip axi_cdma_wrapper
