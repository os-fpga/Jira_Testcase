create_design adder_64
target_device GEMINI
set_device_size 78x66
add_design_file -V_2001 ./rtl/adder_64.v 
set_top_module adder_64
add_constraint_file ./sdc/raptor_sdc.sdc

synthesize area

packing 

global_placement

place 

route 

sta 

bitstream force 
