create_design rs_decoder
target_device 1GVTC
add_include_path ./rtl
add_design_file ./rtl/BM_lamda.v
add_design_file ./rtl/DP_RAM.v
add_design_file ./rtl/GF_matrix_ascending_binary.v
add_design_file ./rtl/GF_matrix_dec.v
add_design_file ./rtl/GF_mult_add_syndromes.v
add_design_file ./rtl/Omega_Phy.v
add_design_file ./rtl/error_correction.v
add_design_file ./rtl/input_syndromes.v
add_design_file ./rtl/lamda_roots.v
add_design_file ./rtl/out_stage.v
add_design_file ./rtl/rs_decoder_top.v
add_design_file ./rtl/transport_in2out.v
set_top_module RS_dec_top
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
pin_loc_assign_method free
packing
place
route
sta
power
bitstream 
