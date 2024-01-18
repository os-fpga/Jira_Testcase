read_verilog -sv /nfs_home/bphilofsky/Raptor/Raptor_2023.10/Raptor/2023.10/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top viterbi_decoder_r2 -I/nfs_home/bphilofsky/Raptor/Scripts -I/nfs_home/bphilofsky/Raptor/Test_Designs/Github/Vitdec/./Src   /nfs_home/bphilofsky/Raptor/Test_Designs/Github/Vitdec/./Src/acs.v \
/nfs_home/bphilofsky/Raptor/Test_Designs/Github/Vitdec/./Src/dpram.v \
/nfs_home/bphilofsky/Raptor/Test_Designs/Github/Vitdec/./Src/tb_ram.v \
/nfs_home/bphilofsky/Raptor/Test_Designs/Github/Vitdec/./Src/viterbi_decoder_r2.v \

analyze -top viterbi_decoder_r2
