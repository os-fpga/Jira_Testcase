create_design Vitdec_raptor_project_default_1GE100-ES1
target_device 1GE100-ES1
add_design_file ./Src/acs.v
add_design_file ./Src/dpram.v
add_design_file ./Src/tb_ram.v
add_design_file ./Src/viterbi_decoder_r2.v
set_top_module viterbi_decoder_r2
add_constraint_file Vitdec_raptor_project_default_1GE100-ES1/constraints.sdc
analyze
