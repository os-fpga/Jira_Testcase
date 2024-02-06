create_design sgen_nco
target_device 1GVTC
add_design_file ./rtl/sgen_nco.v
set_top_module sgen_nco
analyze
synthesize delay