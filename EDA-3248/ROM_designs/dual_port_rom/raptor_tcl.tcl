create_design dual_port_rom
target_device 1VG28
add_design_file ./rtl/dual_port_rom.v
set_top_module dual_port_rom
analyze
synthesize delay
setup_lec_sim
# add_simulation_file ./sim/co_sim_tb/co_sim_dual_port_rom.v ./rtl/dual_port_rom.v
# set_top_testbench co_sim_dual_port_rom
file mkdir ./dual_port_rom/run_1/synth_1_1/simulate_gate/
file copy -force ./rtl/mem.init ./dual_port_rom/run_1/synth_1_1/simulate_gate/
simulation_options compilation icarus gate
simulate gate icarus
packing
place
route
file mkdir ./dual_port_rom/run_1/synth_1_1/impl_1_1_1/simulate_pnr/
file copy -force ./rtl/mem.init ./dual_port_rom/run_1/synth_1_1/impl_1_1_1/simulate_pnr/
simulation_options compilation icarus pnr
simulate pnr icarus
sta
power
bitstream 
