create_design dsp_netlist
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/dsp_netlist.v
set_top_module dsp_netlist
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
