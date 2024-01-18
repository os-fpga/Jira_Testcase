create_design ram_inst_sp_18
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ram_inst_sp_18.v
add_design_file ./rtl/cell_sim_blackbox.v
set_top_module ram_inst_sp_18
synthesize delay
