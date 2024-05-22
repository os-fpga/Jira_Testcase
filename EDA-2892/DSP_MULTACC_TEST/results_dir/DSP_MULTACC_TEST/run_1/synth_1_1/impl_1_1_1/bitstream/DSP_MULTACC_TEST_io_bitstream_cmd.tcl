cd /nfs_scratch/scratch/CompilerValidation/abdul_hameed/1NEW/asdafgawerg/Validation/RTL_testcases/DSP_negative_edge_trigger_design/GJC4/results_dir/DSP_MULTACC_TEST/run_1/synth_1_1/impl_1_1_1/bitstream
clear_property
write_property model_config.property.json
write_simplified_property model_config.simplified.property.json
undefine_device PERIPHERY
source /nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/periphery.tcl
model_config set_model -feature IO PERIPHERY
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/O_DDR.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/I_DELAY.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/O_BUF_DS.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/O_BUFT.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/I_SERDES.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/I_DDR.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/gbox_mode.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/CLK_BUF.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/O_BUFT_DS.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/PLL.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/O_BUF.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/O_DELAY.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/I_BUF.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/O_SERDES.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/etc/devices/gemini_compact_62x44/ric/I_BUF_DS.api.json}
model_config dump_ric PERIPHERY io_ric.txt
model_config gen_ppdb -netlist_ppdb /nfs_scratch/scratch/CompilerValidation/abdul_hameed/1NEW/asdafgawerg/Validation/RTL_testcases/DSP_negative_edge_trigger_design/GJC4/results_dir/DSP_MULTACC_TEST/run_1/synth_1_1/synthesis/io_config.json -config_mapping /nfs_eda_sw/softwares/Raptor/instl_dir/05_22_2024_09_15_02/share/raptor/configuration/Virgo/config_attributes.mapping.json model_config.ppdb.json -property_json model_config.property.json
model_config set_design -feature IO model_config.ppdb.json
model_config write -feature IO -format BIT io_bitstream.bit
model_config write -feature IO -format DETAIL io_bitstream.detail.txt
