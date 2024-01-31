create_design bytewrite_sp_ram_rf
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/bytewrite_sp_ram_rf.v
set_top_module bytewrite_sp_ram_rf
analyze
synth_options -new_tdp36k 
synthesize delay
packing
place
route
sta
power
bitstream 
