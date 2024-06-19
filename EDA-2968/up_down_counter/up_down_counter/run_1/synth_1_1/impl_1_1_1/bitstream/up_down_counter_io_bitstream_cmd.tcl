cd /nfs_project/castor/DV/Azfar/Rigel/DV/subsystem_level/fabric_verif_env/src/fabric_designs/benchmarks/clb/up_down_counter/up_down_counter/run_1/synth_1_1/impl_1_1_1/bitstream
clear_property
write_property model_config.property.json
write_simplified_property model_config.simplified.property.json
undefine_device PERIPHERY
source /nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/periphery.tcl
model_config set_model -feature IO PERIPHERY
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/O_DELAY.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/O_SERDES_CLK.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/gbox_mode.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/I_BUF_DS.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/O_SERDES.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/O_BUF.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/PLL.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/I_BUF.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/O_DDR.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/O_BUFT_DS.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/O_BUFT.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/I_DDR.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/CLK_BUF.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/I_SERDES.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/O_BUF_DS.api.json}
model_config set_api -feature IO {/nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/etc/devices/gemini_compact_10x8/ric/I_DELAY.api.json}
model_config dump_ric PERIPHERY io_ric.txt
model_config gen_ppdb -netlist_ppdb /nfs_project/castor/DV/Azfar/Rigel/DV/subsystem_level/fabric_verif_env/src/fabric_designs/benchmarks/clb/up_down_counter/up_down_counter/run_1/synth_1_1/synthesis/io_config.json -config_mapping /nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/configuration/Virgo/gemini_compact_10x8_config_attributes.mapping.json -property_json model_config.property.json -pll_workaround 0 model_config.ppdb.json
model_config gen_ppdb -netlist_ppdb /nfs_project/castor/DV/Azfar/Rigel/DV/subsystem_level/fabric_verif_env/src/fabric_designs/benchmarks/clb/up_down_counter/up_down_counter/run_1/synth_1_1/synthesis/io_config.json -config_mapping /nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/configuration/Virgo/gemini_compact_10x8_config_attributes.mapping.json -property_json model_config.property.json -pll_workaround 1 model_config.post.ppdb.json
model_config set_design -feature IO model_config.ppdb.json
model_config write -feature IO -format BIT io_bitstream.bit
model_config write -feature IO -format DETAIL io_bitstream.detail.bit
model_config backdoor -script /nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/configuration/Virgo/icb_backdoor.py -input io_bitstream.detail.bit io_bitstream.backdoor.txt
model_config reset -feature IO
model_config set_design -feature IO model_config.post.ppdb.json
model_config write -feature IO -format BIT io_bitstream.post.bit
model_config write -feature IO -format DETAIL io_bitstream.post.detail.bit
model_config backdoor -script /nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/configuration/Virgo/icb_backdoor.py -input io_bitstream.post.detail.bit io_bitstream.post.backdoor.txt
