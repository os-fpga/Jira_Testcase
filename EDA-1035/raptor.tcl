# Design
create_design dsp_mul_signed_comb
add_design_file ./rtl/dsp_mul_signed_comb.v
set_top_module dsp_mul_signed_comb

# Testbench
add_simulation_file ./sim/co_sim_tb/co_sim_dsp_mul_signed_comb.v
add_simulation_file tb_dsp_mul_signed_comb.cpp
add_simulation_file dsp_sim.v
add_simulation_file dsp_mul_signed_comb_post_synth.v
set_top_testbench co_sim_dsp_mul_signed_comb


# Device target
target_device GEMINI

# Compilation/Simulation
analyze

simulation_options verilator compilation -Wno-fatal -Wno-BLKANDNBLK --timing -sc

###############Simulation##################
simulate rtl verilator tb.vcd






