root_dir := $(shell pwd)
src_dir := ${root_dir}/rtl
testbench_dir := ${root_dir}/tb
out_dir := ${root_dir}/out


# VCD File's name(.vcd)
vcd_file = ${out_dir}/wave.vcd

# elf File's name(.out)

elf_file = ${out_dir}/elf.out

ifeq ($(TYPE),RTL)
COMP_OPTS += -DRTL
endif
ifeq ($(TYPE),SYNTHESIS)
COMP_OPTS += -DSYNTHESIS
endif
ifeq ($(TYPE),SYNTH)
COMP_OPTS += -DSYNTH
endif

COMP_OPTS += -DIVERILOG 

src_v_file := ${src_dir}/ahb2ram.sv

testbench_v_file := ${testbench_dir}/ahb2ram_test.sv 

#####################################################################


synth:
	raptor --batch --script raptor.tcl

# Compile + simulate
all:	compile vvp

# only compile

compile:
	if [ ! -d ${out_dir} ];then \
		mkdir -p ${out_dir}; \
	fi;\
	rm -rf ${out_dir}/*; \
	iverilog -o ${elf_file} -g2012 ${COMP_OPTS} ${testbench_v_file} -M${out_dir}/design_files.log

vvp:
	vvp -n ${elf_file}

# only open the wave

wave:
	gtkwave ${vcd_file}

# clear middle files

clean:
	if [ ! -d ${out_dir} ];then \
		rm -rf ${out_dir}/*; \
	fi;\