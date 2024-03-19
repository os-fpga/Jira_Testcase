create_design axil_ocla_md1024_prbs32
target_device GEMINI_COMPACT_104x68
configure_ip axil_ocla_v1_0 -mod_name axil_ocla_md1024_prbs32 -Pmem_depth=1024 -Pno_of_probes=32 -out_file ./axil_ocla_md1024_prbs32/run_1/IPs/axil_ocla_md1024_prbs32
ipgenerate
add_include_path ./axil_ocla_md1024_prbs32/run_1/IPs/rapidsilicon/ip/axil_ocla/v1_0/axil_ocla_md1024_prbs32/src/
add_library_ext .v .sv
add_library_path ./axil_ocla_md1024_prbs32/run_1/IPs/rapidsilicon/ip/axil_ocla/v1_0/axil_ocla_md1024_prbs32/src/
add_design_file ./axil_ocla_md1024_prbs32/run_1/IPs/rapidsilicon/ip/axil_ocla/v1_0/axil_ocla_md1024_prbs32/src/axil_ocla_md1024_prbs32\_v1_0.sv
set_top_module axil_ocla_md1024_prbs32
analyze
synth_options -new_tdp36k 
synthesize delay
pin_loc_assign_method free
packing
place
route
sta
power
bitstream 
