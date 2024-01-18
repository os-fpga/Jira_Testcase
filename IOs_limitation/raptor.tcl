create_design adder_128

add_include_path ./rtl/

target_device GEMINI
set_device_size 78x66
add_design_file -V_2001 ./rtl/adder_128.v 
set_top_module adder_128
add_constraint_file ./adder_128.sdc

synthesize area

packing 

global_placement

place 

route 

sta 
