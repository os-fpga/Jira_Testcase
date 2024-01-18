create_design cordic_2_24

add_include_path ./rtl

target_device 1GE100

add_design_file -V_2001 ./rtl/cordic.v

set_top_module cordic
#add_constraint_file ./sdc/raptor_sdc.sdc

#synth_options 	-effort high
analyze
synthesize delay

packing 


#global_placement

place 


route 


sta
bitstream 
