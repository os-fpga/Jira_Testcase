create_design AES_DECRYPT_VERILOG
target_device 1GE75
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file -SV_2012 ./rtl/aes_decrypt128.sv
add_design_file -SV_2012 ./rtl/aes_decrypt256.sv 
add_design_file -SV_2012 ./rtl/gfmul.sv
add_design_file -SV_2012 ./rtl/InvMixCol_slice.sv
add_design_file -SV_2012 ./rtl/InvSbox.sv
add_design_file -SV_2012 ./rtl/InvSubBytes.sv
add_design_file -SV_2012 ./rtl/KeyExpand192.sv
add_design_file -SV_2012 ./rtl/KschBuffer.sv
add_design_file -SV_2012 ./rtl/Sbox.sv
add_design_file -SV_2012 ./rtl/aes_decrypt192.sv
add_design_file -SV_2012 ./rtl/decrypt.sv
add_design_file -SV_2012 ./rtl/InvAddRoundKey.sv
add_design_file -SV_2012 ./rtl/InvMixColumns.sv
add_design_file -SV_2012 ./rtl/InvShiftRows.sv
add_design_file -SV_2012 ./rtl/KeyExpand128.sv
add_design_file -SV_2012 ./rtl/KeyExpand256.sv
add_design_file -SV_2012 ./rtl/RotWord.sv
add_design_file -SV_2012 ./rtl/SubWord.sv
add_design_file ./rtl/decrypt_top.v
set_top_module decrypt_top
analyze
synth_options -effort high
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
