cd /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os-fpga/Validation/RTL_testcases/RS_Primitive_example_designs/primitive_example_design_13/results_dir/primitive_example_design_13/run_1/synth_1_1/impl_1_1_1/bitstream
write_property model_config.property.json
undefine_device PERIPHERY
source /nfs_eda_sw/softwares/Raptor/instl_dir/04_17_2024_09_15_02/share/raptor/etc/devices/gemini_compact_10x8/ric/periphery.tcl
model_config set_model -feature IO PERIPHERY
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/04_17_2024_09_15_02/share/raptor/etc/devices/gemini_compact_10x8/ric/gbox_mode.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/04_17_2024_09_15_02/share/raptor/etc/devices/gemini_compact_10x8/ric/I_DELAY.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/04_17_2024_09_15_02/share/raptor/etc/devices/gemini_compact_10x8/ric/O_DELAY.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/04_17_2024_09_15_02/share/raptor/etc/devices/gemini_compact_10x8/ric/I_BUF.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/04_17_2024_09_15_02/share/raptor/etc/devices/gemini_compact_10x8/ric/O_BUF.api.json}
model_config dump_ric PERIPHERY io_ric.txt
model_config gen_ppdb -netlist_ppdb /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os-fpga/Validation/RTL_testcases/RS_Primitive_example_designs/primitive_example_design_13/results_dir/primitive_example_design_13/run_1/synth_1_1/synthesis/config.json -config_mapping /nfs_eda_sw/softwares/Raptor/instl_dir/04_17_2024_09_15_02/share/raptor/configuration/Virgo/config_attributes.mapping.json model_config.ppdb.json -property_json model_config.property.json
model_config set_design -feature IO model_config.ppdb.json
model_config write -feature IO -format BIT io_bitstream.bit
model_config write -feature IO -format DETAIL io_bitstream.detail.txt
