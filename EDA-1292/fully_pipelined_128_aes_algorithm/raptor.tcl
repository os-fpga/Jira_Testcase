create_design AES_Encrypt_03_10


#target_device GEMINI
target_device 1GE100

add_library_ext .sv
add_include_path ./rtl
add_library_path ./rtl


add_design_file ./rtl/AES_pkg.vhd
add_design_file ./rtl/AES_Encrypt.vhd


set_top_module AES_Encrypt
#add_constraint_file ./aes/raptor_sdc.sdc

synth_options 	-effort high -carry auto -fsm_encoding onehot 
analyze
synthesize 

packing 
place 
route 
sta
bitstream 

