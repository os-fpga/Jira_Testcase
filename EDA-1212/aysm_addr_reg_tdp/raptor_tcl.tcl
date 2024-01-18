create_design aysm_addr_reg_tdp_dc
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/aysm_addr_reg_tdp_dc.v
set_top_module aysm_addr_reg_tdp_dc
synthesize delay
