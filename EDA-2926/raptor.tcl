create_design dsp_AB_72x72_Pipeline
target_device 1VG28
configure_ip dsp_generator_v1_0 -mod_name dsp_AB_72x72_Pipeline -Pa_width=72 -Pb_width=72 -Pfeature=Pipeline -Punsigned=1 -out_file ./dsp_AB_72x72_Pipeline/run_1/IPs/dsp_AB_72x72_Pipeline
ipgenerate
add_library_path ./dsp_AB_72x72_Pipeline/run_1/IPs/rapidsilicon/ip/dsp_generator/v1_0/dsp_AB_72x72_Pipeline/src/
add_design_file ./dsp_AB_72x72_Pipeline/run_1/IPs/rapidsilicon/ip/dsp_generator/v1_0/dsp_AB_72x72_Pipeline/src/dsp_AB_72x72_Pipeline\_v1_0.v
set_top_module dsp_AB_72x72_Pipeline
analyze
simulate_ip dsp_AB_72x72_Pipeline
synth_options -new_tdp36k 
synthesize delay
pin_loc_assign_method free
packing
place
route
sta
power
bitstream 
