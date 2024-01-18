create_design b01

add_include_path ./rtl

target_device GEMINI_COMPACT_104x68
add_design_file -VHDL_2008 ./rtl/b01_clock_lower_case.vhd 
set_top_module b01
add_constraint_file sdc_upper_case.sdc

synth_options 	-effort high
analyze
synthesize delay

packing 


global_placement

place 


route 


sta
bitstream 
