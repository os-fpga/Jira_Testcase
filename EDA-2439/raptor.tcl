create_design viterb_encoder_and_decoder
target_device 1GVTC
add_design_file ./rtl/bmc000.v
add_design_file ./rtl/bmc001.v
add_design_file ./rtl/bmc010.v
add_design_file ./rtl/bmc011.v
add_design_file ./rtl/bmc100.v
add_design_file ./rtl/bmc101.v
add_design_file ./rtl/bmc110.v
add_design_file ./rtl/bmc111.v
add_design_file ./rtl/ACS.v
add_design_file ./rtl/tbu.v
add_design_file ./rtl/mem_8x1024.v
add_design_file ./rtl/mem_1x1024.v
add_design_file ./rtl/encoder.v
add_design_file ./rtl/decoder.v
add_design_file ./rtl/viterbi_tx_rx.v
set_top_module viterbi_tx_rx
analyze
synthesize 
