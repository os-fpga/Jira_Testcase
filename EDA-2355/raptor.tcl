create_design eh2_dec_02_24
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/eh2_def.sv
add_design_file ./rtl/eh2_lib.sv
add_design_file ./rtl/eh2_pkg.sv
add_design_file ./rtl/beh_lib.sv
add_design_file ./rtl/eh2_dec_csr.sv
add_design_file ./rtl/eh2_dec_decode_ctl.sv
add_design_file ./rtl/eh2_dec_gpr_ctl.sv
add_design_file ./rtl/eh2_dec_ib_ctl.sv
add_design_file ./rtl/eh2_dec_tlu_ctl.sv
add_design_file ./rtl/eh2_dec_tlu_top.sv
add_design_file ./rtl/eh2_dec_trigger.sv
add_design_file ./rtl/eh2_dec.sv
set_top_module eh2_dec
pin_loc_assign_method free
analyze
synthesize 
packing
global_placement
place
route
sta
power
bitstream
