#!/bin/bash
# set -e

main_path=$PWD

design_name="sp_ram"
simulator_name="iverilog"

device=GEMINI_COMPACT_10x8

fixed_sim_path=`which raptor | xargs dirname`

cd $main_path

[ -d $design_name\_golden ] && rm -fr $design_name\_golden
[ -f bitstream_sim.log ] && rm -fr bitstream_sim.log
[ -f post_route_sim.log ] && rm -fr post_route_sim.log
[ -f raptor.log ] && rm -fr raptor.log
[ -f raptor_tail.log ] && rm -fr raptor_tail.log
[ -f parsed_data.json ] && rm -fr parsed_data.json
[ -f raptor_perf.log ] && rm -fr raptor_perf.log
[ -f bitstream_text.txt ] && rm -fr bitstream_text.txt

design_path=`find . -type f -iname "$design_name.v"`
tool_name="vcs"

command -v raptor >/dev/null 2>&1 && raptor_path=$(which raptor) || { echo >&2 echo "First you need to source Raptor"; end_time exit; }
lib_fix_path="${raptor_path:(-11)}"
library=${raptor_path/$lib_fix_path//share/raptor/sim_models/rapidsilicon}
[[ "$raptor_path" == *"latest"* ]] && iverilog_path="${raptor_path:0:49}" || iverilog_path="${raptor_path:0:62}"

[ ! -d $design_name\_golden ] && mkdir $design_name\_golden 

cd $design_name\_golden

echo "create_design $design_name">raptor.tcl
echo "target_device $device">>raptor.tcl
[ -z "$vpr_file_path" ] || [ -z "$openfpga_file_path" ] && echo "" || echo "architecture $vpr_file_path $openfpga_file_path">>raptor.tcl
echo "add_include_path ../rtl">>raptor.tcl
echo "add_library_path ../rtl">>raptor.tcl  
echo "add_library_ext .v .sv">>raptor.tcl 
echo "add_design_file ../rtl/$design_name.v">>raptor.tcl
echo "set_top_module $design_name">>raptor.tcl
[ -z "$set_device_size" ] && echo "" || echo "set_device_size $set_device_size">>raptor.tcl
[ -z "$bitstream_setting_path" ] || [ -z "$fixed_sim_openfpga_path" ] || [ -z "$repack_design_constraint_path" ] && echo "" || echo "bitstream_config_files -bitstream $bitstream_setting_path -sim $fixed_sim_openfpga_path -repack $repack_design_constraint_path">>raptor.tcl
[ -z "$set_channel_width" ] && echo "" || echo "set_channel_width $set_channel_width">>raptor.tcl
echo "add_constraint_file ../clk_constraint.sdc">>raptor.tcl
# echo "pin_loc_assign_method free">>raptor.tcl
# echo "synth_options -new_tdp36k">>raptor.tcl
echo "synthesize $strategy">>raptor.tcl
echo "packing">>raptor.tcl
# echo "global_placement">>raptor.tcl
echo "place">>raptor.tcl
echo "route">>raptor.tcl
echo "sta">>raptor.tcl
echo "power">>raptor.tcl
[ -z "$vpr_file_path" ] && echo "bitstream">>raptor.tcl || echo "bitstream write_xml pb_pin_fixup">>raptor.tcl    # enable_simulation

xml_version=`cd $xml_root/openfpga-pd-castor-rs && git describe --tags --abbrev=0`

start_raptor=`date +%s`
raptor --batch --script raptor.tcl 
end_raptor=`date +%s`
runtime_raptor=$((end_raptor-start_raptor))
echo -e "\nTotal RunTime: $runtime_raptor sec">>raptor.log
raptor --version>>raptor.log
echo -e "Netlist Version: $xml_version">>raptor.log
echo -e "Device: $device">>raptor.log

post_route_netlist_path=`find $main_path -wholename "*/routing/$design_name\_post_route.v"`

string="_post_route"
while read line; do
        if [[ $(echo "$line" | cut -d "(" -f1)  == "module $design_name " ]]; 
        then
            sed -i "s/module $design_name/module $design_name\_post_route/" $post_route_netlist_path
            break 2
        fi
        if [[ $(echo "$line" | cut -d "(" -f1)  == "module $design_name$string " ]]; 
        then
            break 2
        fi
done < $post_route_netlist_path

root_path=`pwd`
route_tb_path=`find ../ -type f -iname "sim_route_$design_name.sv" -printf $root_path/'%p\n'`
if [ -z "$route_tb_path" ]
then
    echo "No such Test Bench for $design_name"
else 
    echo -e "Test Bench for this design Found!"
fi
bitstream_tb_path=`find ../sim -type f -iname "$design_name\_include_netlists.v" -printf $root_path/'%p\n'`
if [ -z "$bitstream_tb_path" ]
then
    echo "No such Test Bench for $design_name"
else 
    echo -e "Test Bench for this design Found!"
fi

primitive=`find $library -wholename "*/genesis3/primitives.v"`
DFFRE=`find $library -wholename "*/FPGA_PRIMITIVES_MODELS/sim_models/verilog/DFFRE.v"`
TDP_RAM36K=`find $library -wholename "*/FPGA_PRIMITIVES_MODELS/sim_models/verilog/TDP_RAM36K.v"`
rs_tdp36k=`find $library -wholename "*/FPGA_PRIMITIVES_MODELS/sim_models_internal/primitives_mapping/BRAM/rs_tdp36k_post_pnr_mapping.v"`

if [[ $simulator_name == "iverilog" ]]
then
    [ ! -d $design_name\_$simulator_name\_post_route_files ] && mkdir $design_name\_$simulator_name\_post_route_files
    [ -d $design_name\_$simulator_name\_post_route_files ] && cd $design_name\_$simulator_name\_post_route_files
    start_post_route=`date +%s`
    iverilog -Wtimescale=1ns/1ps -g2012 -DIVERILOG=1 -o $design_name $TDP_RAM36K $rs_tdp36k $DFFRE $primitive ../../rtl/$design_name.v $post_route_netlist_path $route_tb_path -y $main_path/rtl && vvp ./$design_name | tee post_route_sim.log
    end_post_route=`date +%s`
    runtime_post_route=$((end_post_route-start_post_route))
    echo -e "\nTotal RunTime: $runtime_post_route sec">>post_route_sim.log
fi

while read line; do
        if [[ $line == *"All Comparison Matched"* ]]
        then
            vcd2fst tb.vcd tb.fst --compress
            rm -fr tb.vcd
        fi
        if [[ $line == *"Error: Simulation Failed"* ]]
        then
            vcd2fst tb.vcd tb.fst --compress
            rm -fr tb.vcd
        fi
done < post_route_sim.log

