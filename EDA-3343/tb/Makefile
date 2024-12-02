# This file is Copyright (c) 2022 RapidSilicon.
#
# SPDX-License-Identifier: MIT
SHELL := /bin/bash
.SHELLFLAGS := -O extglob -c

MODULE_NAME ?= vex_soc_sim

OUT_DIR ?= $(PWD)
# Name of the executable (output from iverilog)
TARGET = $(MODULE_NAME)

# Directories containing Verilog source and simulation files
RTL_DIR += /nfs_scratch/scratch/CGA/repo/2024-11-30-22-25-48_T12694R122/Validation/RTL_testcases/litex_designs/vexriscv_axi_cdma/results_dir/vex_soc/run_1/synth_1_1/synthesis/vex_soc_post_synth.v
RTL_DIR += /nfs_eda_sw/softwares/Raptor/instl_dir/11_30_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/!(SOC_FPGA_TEMPERATURE).v

SIM_DIR = ../tb

# Verilog source files
VERILOG_FILES = $(wildcard $(RTL_DIR)/*.v) $(wildcard $(SIM_DIR)/*.v)

# iverilog command and options
IVERILOG_CMD = iverilog -g2012 -o $(TARGET) -I$(RTL_DIR)

# vvp command
VVP_CMD = vvp $(TARGET)

# Default target (the first target is the default)
all:
	@sed -i "s|tb.vcd|$(OUT_DIR)/tb_post.vcd|g" ./testbench.v
	$(IVERILOG_CMD) $(VERILOG_FILES)
	$(VVP_CMD)
	-@mv $(TARGET) $(OUT_DIR)
	@sed -i "s|$(OUT_DIR)/tb_post.vcd|tb.vcd|g" ./testbench.v

# Rule to build the Verilog executable
$(TARGET): $(VERILOG_FILES)
	$(IVERILOG_CMD) $(VERILOG_FILES)

# Rule to clean up generated files
clear:
	rm -f $(TARGET)

# Phony targets (not actual files)

.PHONY: all run clean
