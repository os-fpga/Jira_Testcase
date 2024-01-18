

VPR issue below error when dangling port is processed:

# Build Timing Graph
# Build Timing Graph took 0.01 seconds (max_rss 16.8 MiB, delta_rss +0.3 MiB)
Error 1: STA Engine: IPIN has no out-going edges (Netlist Pin: 'mul[0].output_select[0]', Netlist Block: 'mul[0]', Timing Graph Node: 233)

How to Reproduce:
-----------------
vpr rvt_vpr_06_05.xml dsp_mul_unsigned_reg_post_synth.blif --sdc_file dsp_mul_unsigned_reg_openfpga.sdc --route_chan_width 180 --clock_modeling ideal --timing_report_npaths 100 --absorb_buffer_luts off --constant_net_method route --timing_report_detail detailed --post_place_timing_report dsp_mul_unsigned_reg_post_place_timing.rpt --device base --pack

When option "--allow_dangling_combinational_nodes on" is provided, VPR ignore this error and continue. Need to evaluate the impact on QoR in such case.

