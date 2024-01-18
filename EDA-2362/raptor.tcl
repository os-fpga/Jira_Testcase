create_design aes_cipher_top
target_device 1GVTC
add_library_path ./rtl
add_design_file ./rtl/aes_cipher_top.v
set_top_module aes_cipher_top
add_constraint_file ./raptor_sdc.sdc
analyze
synth_options -effort high
synthesize delay
