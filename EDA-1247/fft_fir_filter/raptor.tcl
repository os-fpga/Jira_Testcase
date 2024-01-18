create_design fft_fir_filter

add_include_path ./rtl

target_device 1GE100
add_design_file ./rtl/control_i.vhd
add_design_file ./rtl/control_slip.vhd
add_design_file ./rtl/rom_cos.vhd
add_design_file ./rtl/rom_cosi.vhd
add_design_file ./rtl/alfft_core_sli.vhd
add_design_file ./rtl/alfft_core_slip.vhd
add_design_file ./rtl/ramb16_s36_s36.vhd
add_design_file ./rtl/ramb16_s18_s18.vhd
add_design_file ./rtl/ram2x_2.vhd
add_design_file ./rtl/ram1x_2.vhd
add_design_file ./rtl/fftdpath.vhd
add_design_file ./rtl/fftdpathi.vhd
add_design_file ./rtl/denorm.vhd
add_design_file ./rtl/fft_filtr2.vhd

set_top_module FFT_FILTER2
#add_constraint_file ./aes/raptor_sdc.sdc

synth_options 	-effort high -carry auto -fsm_encoding onehot 
analyze
synthesize 

packing 
place 
route 
sta
bitstream 

