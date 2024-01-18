create_design asym_reg_addr_2tdp_dc
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/asym_reg_addr_2tdp_dc.v
set_top_module asym_reg_addr_2tdp_dc
synthesize delay
