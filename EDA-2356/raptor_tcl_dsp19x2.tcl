create_design dsp19x2_inst_design
target_device GEMINI_COMPACT_104x68
add_design_file ./dsp19x2_inst_design.v
add_simulation_file ./tb_dsp19x2_inst_design.v 
set_top_testbench tb_dsp19x2_inst_design
set_top_module dsp19x2_inst_design
simulation_options compilation icarus rtl -DSIM
simulate rtl icarus -DSIM
analyze
synthesize delay
simulation_options compilation icarus gate
simulate gate icarus -DGATE
