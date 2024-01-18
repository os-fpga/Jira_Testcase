create_design balancer_top
target_device GEMINI
add_include_path ./rtl
add_design_file ./rtl/Aging_Timer.vhd
add_design_file ./rtl/balance.vhd
add_design_file ./rtl/balancer_top.vhd
add_design_file ./rtl/balance_top.vhd
add_design_file ./rtl/classifier.vhd
add_design_file ./rtl/classifier_arbiter.v
add_design_file ./rtl/config.vhd
add_design_file ./rtl/div_binary.vhd
add_design_file ./rtl/hello_pkt.vhd
add_design_file ./rtl/mac_ram_table.vhd
add_design_file ./rtl/manager.vhd
add_design_file ./rtl/n_mac.vhd
add_design_file ./rtl/open_header.vhd
add_design_file ./rtl/pass.vhd
add_design_file ./rtl/ram_256x48.vhd
add_design_file ./rtl/router.vhd
add_design_file ./rtl/small_fifo.v
add_design_file ./rtl/table.vhd
add_design_file ./rtl/valid_address.vhd
set_top_module balancer_top
synthesize delay
packing
global_placement
place
route
sta
power
bitstream
