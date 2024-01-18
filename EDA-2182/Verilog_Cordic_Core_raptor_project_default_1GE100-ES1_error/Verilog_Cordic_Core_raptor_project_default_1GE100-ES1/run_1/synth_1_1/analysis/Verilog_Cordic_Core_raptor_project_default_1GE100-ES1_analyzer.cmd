read_verilog -sv /nfs_home/bphilofsky/Raptor/Raptor_2023.10/Raptor/2023.10/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top cordic -I/nfs_home/bphilofsky/Raptor/Scripts -I/nfs_home/bphilofsky/Raptor/Test_Designs/Github/Verilog_Cordic_Core/./Src   /nfs_home/bphilofsky/Raptor/Test_Designs/Github/Verilog_Cordic_Core/./Src/cordic.v \

analyze -top cordic
