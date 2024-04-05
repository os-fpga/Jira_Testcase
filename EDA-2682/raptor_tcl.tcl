create_design axi_dma_default
target_device GEMINI_COMPACT_104x68
configure_ip axi_dma_v1_0 -mod_name axi_dma_default -Paxi_data_width=32 -Paxi_addr_width=16 -Paxi_id_width=8 -Paxi_max_burst_len=16 -Paxis_last_enable=1 -Paxis_id_enable=0 -Paxis_id_width=8 -Paxis_dest_enable=0 -Paxis_dest_width=8 -Paxis_user_enable=1 -Paxis_user_width=1 -Plen_width=20 -Ptag_width=8 -Penable_sg=0 -Penable_unaligned=0 -out_file ./axi_dma_default/run_1/IPs/axi_dma_default
ipgenerate
add_library_path ./axi_dma_default/run_1/IPs/rapidsilicon/ip/axi_dma/v1_0/axi_dma_default/src/
add_design_file ./axi_dma_default/run_1/IPs/rapidsilicon/ip/axi_dma/v1_0/axi_dma_default/src/axi_dma_default\_v1_0.v
set_top_module axi_dma_default
analyze
simulate_ip axi_dma_default
synth_options -new_tdp36k 
synthesize delay
pin_loc_assign_method free
packing
place
route
sta
power
bitstream 
