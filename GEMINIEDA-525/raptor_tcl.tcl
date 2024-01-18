create_design tdp
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/tdp_ram.v
set_top_module tdp_ram
synthesize delay
#pnr_options --gen_post_synthesis_netlist on
#packing
#global_placement
#place
#route
#sta
#power
#bitstream
#tcl_exit
