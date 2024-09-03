create_design aes_core
target_device 1VG28
add_include_path ./rtl
add_design_file ./rtl/aes_inv/aes_inv_cipher_top.v
add_design_file ./rtl/aes_inv/aes_inv_sbox.v
add_design_file ./rtl/aes_inv/aes_key_expand_128.v
add_design_file ./rtl/aes_inv/aes_rcon.v
add_design_file ./rtl/aes_inv/aes_sbox.v
set_top_module aes_inv_cipher_top
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
setup_lec_sim 2 2
simulation_options compilation icarus gate
simulate gate icarus
packing
place
route
simulation_options compilation icarus pnr
simulate pnr icarus
sta
power
bitstream 
