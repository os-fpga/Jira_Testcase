create_design AES_DECRYPT_V2_02_24
target_device GEMINI
add_include_path ./AES_DECRYPT.srcs/sources_1
add_library_path ./AES_DECRYPT.srcs/sources_1
add_library_ext .v .sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/aes_decrypt128.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/aes_decrypt192.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/aes_decrypt256.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/aes_decrypt256.SV
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/decrypt.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/generic_muxfx.v
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/gfmul.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/InvAddRoundKey.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/InvMixCol_slice.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/InvMixColumns.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/InvSbox.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/InvShiftRows.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/InvSubBytes.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/KeyExpand128.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/KeyExpand192.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/KeyExpand256.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/KschBuffer.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/RotWord.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/Sbox.sv
add_design_file -SV_2012 ./AES_DECRYPT.srcs/sources_1/SubWord.sv
add_design_file  ./AES_DECRYPT.srcs/sources_1/wrapper.v
add_design_file  ./AES_DECRYPT.srcs/sources_1/wrapper_top.v
set_top_module wrapper_top
synthesize -effort high
add_constraint_file ./AES_DECRYPT.srcs/constrs_1/aes_decrypt.sdc
packing
global_placement
place
route
sta
power
bitstream 
