create_design fixed_point_arithmetic_parameterized
target_device 1GVTC
add_include_path ./rtl
add_design_file ./rtl/qadd.v
add_design_file ./rtl/qdiv.v
add_design_file ./rtl/qmult.v
add_design_file ./rtl/qtwosComp.v
set_top_module qmult
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
