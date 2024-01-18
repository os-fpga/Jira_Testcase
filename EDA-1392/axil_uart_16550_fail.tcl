create_design axil_uart16550_default
target_device GEMINI_COMPACT_82x68
configure_ip axil_uart16550_v1_0 -mod_name=axil_uart16550_default -Pdata_width=32 -Paddr_width=16 -out_file ./axil_uart16550_default.v
ipgenerate
add_include_path ./rapidsilicon/ip/axil_uart16550/v1_0/axil_uart16550_default/src/
add_library_ext .v .sv
add_library_path rapidsilicon/ip/axil_uart16550/v1_0/axil_uart16550_default/src/
add_design_file ./rapidsilicon/ip/axil_uart16550/v1_0/axil_uart16550_default/src/axil_uart16550_default.v
set_top_module axil_uart16550_default
synthesize delay
pin_loc_assign_method free
packing
global_placement
place
route
sta
power
bitstream 
