read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top asym_ram_sdp_write_wider_dc_logic -y ../../../../.././rtl -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/asym_ram_sdp_write_wider_dc_logic/results_dir/.././rtl +libext+.v+.sv  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/asym_ram_sdp_write_wider_dc_logic/results_dir/.././rtl/asym_ram_sdp_write_wider_dc_logic.v \

analyze -top asym_ram_sdp_write_wider_dc_logic
