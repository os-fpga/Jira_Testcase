create_design vexriscv_cpu_plic_clint
target_device GEMINI_COMPACT_82x68
configure_ip vexriscv_cpu_v1_0 -mod_name=vexriscv_cpu_plic_clint -version=v1_0 -Pvariant=Cache_MMU_PLIC_CLINT -out_file ./vexriscv_cpu_plic_clint.v
ipgenerate
add_include_path ./rapidsilicon/ip/vexriscv_cpu/v1_0/vexriscv_cpu_plic_clint/src/
add_library_ext .v .sv
add_library_path rapidsilicon/ip/vexriscv_cpu/v1_0/vexriscv_cpu_plic_clint/src/
add_design_file ./rapidsilicon/ip/vexriscv_cpu/v1_0/vexriscv_cpu_plic_clint/src/vexriscv_cpu_plic_clint.v
set_top_module vexriscv_cpu_plic_clint
synthesize delay
pin_loc_assign_method free
packing
global_placement
place
route
sta
power
bitstream 
