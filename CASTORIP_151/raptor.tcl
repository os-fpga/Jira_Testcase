create_design mult_16bit_inreg
target_device GEMINI
#set_device_size 78x66
#add_include_path ./ ./inc/

add_design_file ./dsp_regin.v

set_top_module mult_16bit_inreg
synthesize
