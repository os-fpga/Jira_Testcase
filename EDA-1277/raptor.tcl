create_design dsp_AB_54x54
target_device GEMINI
configure_ip dsp_v1_0 -mod_name=dsp_AB_54x54 -Pa_width=54 -Pb_width=54 -out_file ./dsp_AB_54x54.v
ipgenerate
add_include_path ./rapidsilicon/ip/dsp/v1_0/dsp_AB_54x54/src/
add_library_ext .v .sv
add_library_path rapidsilicon/ip/dsp/v1_0/dsp_AB_54x54/src/
add_design_file ./rapidsilicon/ip/dsp/v1_0/dsp_AB_54x54/src/dsp_AB_54x54.v
set_top_module dsp_AB_54x54
synthesize delay
pin_loc_assign_method free
packing
global_placement
place
route
sta
power
bitstream 
