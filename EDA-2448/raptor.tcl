create_design ram_true_reg_addr_dp_1024x32_verilator
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ram_true_reg_addr_dp_1024x32_verilator.v
add_simulation_file ./sim/co_sim_tb/co_sim_ram_true_reg_addr_dp_1024x32_verilator.v
set_top_testbench co_sim_ram_true_reg_addr_dp_1024x32_verilator
set_top_module ram_true_reg_addr_dp_1024x32_verilator
analyze
simulation_options compilation verilator rtl --timing --build --main --exe
simulate rtl verilator
synthesize delay
simulation_options compilation verilator gate --timing --build --main --exe
simulate gate verilator
packing
global_placement
place
route
simulation_options compilation verilator -DPNR=1 pnr --timing --build --main --exe
simulate pnr verilator
sta
power
bitstream 
