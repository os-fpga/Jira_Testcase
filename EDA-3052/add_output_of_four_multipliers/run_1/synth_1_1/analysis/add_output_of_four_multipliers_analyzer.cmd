read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/07_11_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top add_output_of_four_multipliers -y ../../../.././rtl -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/8thJuly/Validation/RTL_testcases/DSP_Designs/add_output_of_four_multipliers/EDA-3052/./rtl +libext+.v+.sv  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/8thJuly/Validation/RTL_testcases/DSP_Designs/add_output_of_four_multipliers/EDA-3052/./rtl/add_output_of_four_multipliers.v \

analyze -top add_output_of_four_multipliers
