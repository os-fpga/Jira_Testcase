create_design me_top_02_24
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/config.vhd
add_design_file ./rtl/forward_engine.vhd
add_design_file ./rtl/concatenate64.vhd
add_design_file ./rtl/current_macroblock_memory64.vhd
add_design_file ./rtl/distance_engine64.vhd
add_design_file ./rtl/dual_port_component.vhd
add_design_file ./rtl/range_checker.vhd
add_design_file ./rtl/me_control_unit.vhd
add_design_file ./rtl/me_engine.vhd
add_design_file ./rtl/phy_address.vhd
add_design_file ./rtl/point_memory.vhd
add_design_file ./rtl/program_memory.vhd
add_design_file ./rtl/sad_selector.vhd
add_design_file ./rtl/reg_memory_dp.vhd
add_design_file ./rtl/register_file.vhd
add_design_file ./rtl/reference_memory64_remap.vhd
add_design_file ./rtl/reference_macroblock_memory64.vhd
add_design_file ./rtl/reference_memory64_dp_large.vhd
add_design_file ./rtl/me_top.vhd
set_top_module me_top
analyze
pin_loc_assign_method free
add_constraint_file ./constraints.sdc
synthesize delay
packing
global_placement
place
route
sta
power
bitstream
