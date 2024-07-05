create_design Matrix-Multiplication-Using-Systolic-Arrays
target_device 1VG28
add_include_path ./rtl
add_design_file ./rtl/apb_slave.v
add_design_file ./rtl/matmul_calc.v
add_design_file ./rtl/mem.v
add_design_file ./rtl/pe_module.v
add_design_file ./rtl/matmul.v
set_top_module matmul
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
