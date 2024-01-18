create_design cic_d_02_24

add_include_path ./rtl

target_device 1GE100
add_design_file ./rtl/cic_package.sv
add_design_file ./rtl/comb.sv
add_design_file ./rtl/downsampler.sv
add_design_file ./rtl/integrator.sv
add_design_file ./rtl/cic_d.sv

set_top_module cic_d
#add_constraint_file /nfs_scratch/scratch/CGA/repo/2023-02-21-17-05-36_T1496R24/Gap-Analysis/misc/raptor/run4/ata_ocidec-2//raptor_sdc.sdc

synth_options 	-effort high
analyze
synthesize delay
packing 
place
route 
sta
bitstream 

