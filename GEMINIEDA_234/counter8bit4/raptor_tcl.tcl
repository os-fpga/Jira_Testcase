create_design counter8bit4
target_device MPW1
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/counter8bit4.v
set_top_module counter8bit4
synthesize delay
custom_openfpga_script ./counter8bit4.openfpga
pnr_options --gen_post_synthesis_netlist on
set_device_size 4x4
packing
global_placement
place
route
sta
power
bitstream force
