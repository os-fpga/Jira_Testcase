create_design bitonic_mesh
target_device 1LY750
add_include_path ./rtl
add_design_file ./rtl/addersub_slt.v
add_design_file ./rtl/branchresolve.v
add_design_file ./rtl/components.v
add_design_file ./rtl/data_mem_stall.v
add_design_file ./rtl/fifo.v
add_design_file ./rtl/hi_reg.v
add_design_file ./rtl/ifetch_pipe.v
add_design_file ./rtl/isa.v
add_design_file ./rtl/lo_reg.v
add_design_file ./rtl/logic_unit.v
add_design_file ./rtl/lpm_counter.v
add_design_file ./rtl/merge26lo.v
add_design_file ./rtl/mul.v
add_design_file ./rtl/pcadder.v
add_design_file ./rtl/reg_file.v
add_design_file ./rtl/shifter_perbit_pipe.v
add_design_file ./rtl/signext16.v
add_design_file ./rtl/system.v
add_design_file ./rtl/system100.v
add_design_file ./rtl/t_dpram_sclk_be.v
add_design_file ./rtl/t_dpram_sclka.v
add_design_file ./rtl/t_dpram_sclkb.v
set_top_module system100
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
