# Design
create_design neorv32_vhdl_pnr
# add_design_file -VHDL_1993 rtl/core/*.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_package.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_cpu_cp_shifter.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_mtime.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_cpu.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_bus_keeper.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_cpu_bus.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_icache.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_cpu_cp_bitmanip.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_debug_dm.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_xirq.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_busswitch.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_cpu_control.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_top.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_cpu_cp_muldiv.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_boot_rom.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_neoled.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_cpu_alu.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_bootloader_image.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_imem.entity.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_xip.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_sdi.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_cpu_cp_cfu.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_cfs.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_uart.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_onewire.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_gpio.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_spi.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_dmem.entity.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_pwm.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_cpu_decompressor.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_wdt.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_sysinfo.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_application_image.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_dcache.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_debug_dtm.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_twi.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_dma.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_fifo.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_gptmr.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_cpu_cp_fpu.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_cpu_cp_cond.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_cpu_regfile.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_trng.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/neorv32_wishbone.vhd
# add_design_file -VHDL_1993 rtl/core/mem/*.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/mem/neorv32_dmem.legacy.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/mem/neorv32_imem.legacy.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/mem/neorv32_imem.default.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/core/mem/neorv32_dmem.default.vhd
# add_design_file -VHDL_1993 rtl/processor_templates/*.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/processor_templates/neorv32_ProcessorTop_Minimal.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/processor_templates/neorv32_ProcessorTop_MinimalBoot.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/processor_templates/neorv32_ProcessorTop_UP5KDemo.vhd
# add_design_file -VHDL_1993 rtl/system_integration/*.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/system_integration/neorv32_SystemTop_axi4lite.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/system_integration/neorv32_litex_core_complex.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/system_integration/neorv32_SystemTop_AvalonMM.vhd
# add_design_file -VHDL_1993 rtl/test_setups/*.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/test_setups/neorv32_test_setup_on_chip_debugger.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/test_setups/neorv32_test_setup_bootloader.vhd
add_design_file -VHDL_1993 -work neorv32 ./rtl/test_setups/neorv32_test_setup_approm.vhd
#set design top
set_top_module neorv32_top -work neorv32
# add_constraint_file pin_mapping.pin
# add_constraint_file constraints.sdc

# Testbench
#package file needed for gatesim as tb files before netlist
add_simulation_file -VHDL_1993 -work neorv32  ./rtl/core/neorv32_package.vhd
add_simulation_file -VHDL_1993 -work neorv32 ./sim/simple/uart_rx.simple.vhd
add_simulation_file -VHDL_1993 -work neorv32 ./sim/simple/neorv32_tb.simple.vhd
set_top_testbench neorv32_tb_simple

# Device target
target_device 1GE75

# Compilation/Simulation
analyze

# # RTL Simulation
simulation_options "ghdl" "compilation" "--work=neorv32"
simulation_options "ghdl" "elaboration" "--work=neorv32"
simulation_options "ghdl" "simulation" "--stop-time=10ms"
simulation_options "ghdl" "extra_options" "--work=neorv32"
# simulate "rtl" "ghdl" sim_rtl.fst

# Synthesis
pnr_netlist_lang vhdl
synthesize delay

# Post-Synthesis gate-level Simulation
# simulate "gate" "ghdl" syn_tb_gate.fst

# # Pack/Place/Route
packing
place
route

# # Post-Route Simulation
simulate pnr ghdl syn_tb_pnr.fst

# Static Timing Analysis
sta 

# # Bitstream Generation
# bitstream 
