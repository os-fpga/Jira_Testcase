create_design HD_ADPCM_Codec
target_device GEMINI_COMPACT_104x68
add_design_file -VHDL_1993 ./rtl/HD_ADPCM_Codec.vhd
set_top_module HD_ADPCM_Codec
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
