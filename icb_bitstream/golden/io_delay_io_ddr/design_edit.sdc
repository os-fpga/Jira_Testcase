#############
#
# Fabric clock assignment
#
#############
# This clock is only used by gearbox, does not need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock clk (Physical port name, clock module: CLK_BUF clk_buf)

#############
#
# Each pin mode and location assignment
#
#############
# Pin      delay_adj              :: I_BUF
# set_mode MODE_BP_DIR_B_RX       HR_1_1_0N
# set_io   delay_adj              HR_1_1_0N                       --> (original)
set_io     $ibuf_delay_adj        HR_1_0_0P                       -mode          MODE_BP_DIR_B_RX -internal_pin g2f_rx_in[5]_A

# Pin      delay_incdec           :: I_BUF
# set_mode MODE_BP_DIR_B_RX       HR_1_3_1N
# set_io   delay_incdec           HR_1_3_1N                       --> (original)
set_io     $ibuf_delay_incdec     HR_1_2_1P                       -mode          MODE_BP_DIR_B_RX -internal_pin g2f_rx_in[5]_A

# Pin      delay_load             :: I_BUF
# set_mode MODE_BP_DIR_A_RX       HR_1_0_0P
# set_io   delay_load             HR_1_0_0P                       --> (original)
set_io     $ibuf_delay_load       HR_1_0_0P                       -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      din                    :: I_BUF |-> I_DELAY |-> I_DDR
# set_mode MODE_BP_DDR_A_RX       HP_1_0_0P
# set_io   din                    HP_1_0_0P                       --> (original)
set_io     o_ddr_d                HP_1_0_0P                       -mode          MODE_BP_DDR_A_RX -internal_pin g2f_rx_in[0]_A
set_io     $delete_wire$416       HP_1_0_0P                       -mode          MODE_BP_DDR_A_RX -internal_pin g2f_rx_in[1]_A

# Pin      enable                 :: I_BUF
# set_mode MODE_BP_DIR_B_RX       HP_1_3_1N
# set_io   enable                 HP_1_3_1N                       --> (original)
set_io     $ibuf_enable           HP_1_2_1P                       -mode          MODE_BP_DIR_B_RX -internal_pin g2f_rx_in[5]_A

# Pin      reset                  :: I_BUF
# set_mode MODE_BP_DIR_A_RX       HP_1_2_1P
# set_io   reset                  HP_1_2_1P                       --> (original)
set_io     $ibuf_reset            HP_1_2_1P                       -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      dout                   :: O_DDR |-> O_DELAY |-> O_BUFT
# set_mode MODE_BP_DDR_B_TX       HP_1_1_0N
# set_io   dout                   HP_1_1_0N                       --> (original)
set_io     $auto_437              HP_1_0_0P                       -mode          MODE_BP_DDR_B_TX -internal_pin f2g_tx_out[5]_A
# set_io   __const_bit_0__        HP_1_0_0P                       -mode          MODE_BP_DDR_B_TX -internal_pin f2g_tx_out[6]_A

# Pin      i_delay_value[0]       :: O_BUFT
# set_mode MODE_BP_DIR_A_TX       HR_5_0_0P
# set_io   i_delay_value[0]       HR_5_0_0P                       --> (original)
set_io     $obuf_i_delay_value[0] HR_5_0_0P                       -mode          MODE_BP_DIR_A_TX -internal_pin f2g_tx_out[0]_A

# Pin      i_delay_value[1]       :: O_BUFT
# set_mode MODE_BP_DIR_B_TX       HR_5_1_0N
# set_io   i_delay_value[1]       HR_5_1_0N                       --> (original)
set_io     $obuf_i_delay_value[1] HR_5_0_0P                       -mode          MODE_BP_DIR_B_TX -internal_pin f2g_tx_out[5]_A

# Pin      i_delay_value[2]       :: O_BUFT
# set_mode MODE_BP_DIR_A_TX       HR_5_2_1P
# set_io   i_delay_value[2]       HR_5_2_1P                       --> (original)
set_io     $obuf_i_delay_value[2] HR_5_2_1P                       -mode          MODE_BP_DIR_A_TX -internal_pin f2g_tx_out[0]_A

# Pin      i_delay_value[3]       :: O_BUFT
# set_mode MODE_BP_DIR_B_TX       HR_5_3_1N
# set_io   i_delay_value[3]       HR_5_3_1N                       --> (original)
set_io     $obuf_i_delay_value[3] HR_5_2_1P                       -mode          MODE_BP_DIR_B_TX -internal_pin f2g_tx_out[5]_A

# Pin      i_delay_value[4]       :: O_BUFT
# set_mode MODE_BP_DIR_A_TX       HR_5_4_2P
# set_io   i_delay_value[4]       HR_5_4_2P                       --> (original)
set_io     $obuf_i_delay_value[4] HR_5_4_2P                       -mode          MODE_BP_DIR_A_TX -internal_pin f2g_tx_out[0]_A

# Pin      i_delay_value[5]       :: O_BUFT
# set_mode MODE_BP_DIR_B_TX       HR_5_5_2N
# set_io   i_delay_value[5]       HR_5_5_2N                       --> (original)
set_io     $obuf_i_delay_value[5] HR_5_4_2P                       -mode          MODE_BP_DIR_B_TX -internal_pin f2g_tx_out[5]_A

# Pin      o_delay_value[0]       :: O_BUFT
# set_mode MODE_BP_DIR_A_TX       HR_5_6_3P
# set_io   o_delay_value[0]       HR_5_6_3P                       --> (original)
set_io     $obuf_o_delay_value[0] HR_5_6_3P                       -mode          MODE_BP_DIR_A_TX -internal_pin f2g_tx_out[0]_A

# Pin      o_delay_value[1]       :: O_BUFT
# set_mode MODE_BP_DIR_B_TX       HR_5_7_3N
# set_io   o_delay_value[1]       HR_5_7_3N                       --> (original)
set_io     $obuf_o_delay_value[1] HR_5_6_3P                       -mode          MODE_BP_DIR_B_TX -internal_pin f2g_tx_out[5]_A

# Pin      o_delay_value[2]       :: O_BUFT
# set_mode MODE_BP_DIR_A_TX       HR_5_8_4P
# set_io   o_delay_value[2]       HR_5_8_4P                       --> (original)
set_io     $obuf_o_delay_value[2] HR_5_8_4P                       -mode          MODE_BP_DIR_A_TX -internal_pin f2g_tx_out[0]_A

# Pin      o_delay_value[3]       :: O_BUFT
# set_mode MODE_BP_DIR_B_TX       HR_5_9_4N
# set_io   o_delay_value[3]       HR_5_9_4N                       --> (original)
set_io     $obuf_o_delay_value[3] HR_5_8_4P                       -mode          MODE_BP_DIR_B_TX -internal_pin f2g_tx_out[5]_A

# Pin      o_delay_value[4]       :: O_BUFT
# set_mode MODE_BP_DIR_A_TX       HR_5_CC_18_9P
# set_io   o_delay_value[4]       HR_5_CC_18_9P                   --> (original)
set_io     $obuf_o_delay_value[4] HR_5_CC_18_9P                   -mode          MODE_BP_DIR_A_TX -internal_pin f2g_tx_out[0]_A

# Pin      o_delay_value[5]       :: O_BUFT
# set_mode MODE_BP_DIR_B_TX       HR_5_CC_19_9N
# set_io   o_delay_value[5]       HR_5_CC_19_9N                   --> (original)
set_io     $obuf_o_delay_value[5] HR_5_CC_18_9P                   -mode          MODE_BP_DIR_B_TX -internal_pin f2g_tx_out[5]_A

# Clock data from object clk port O is not routed to fabric
# Pin      clk                    :: I_BUF |-> CLK_BUF

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: delay_adj
# Location: HR_1_1_0N
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto_417                             HR_1_1_0N     -mode MODE_BP_DIR_B_RX -internal_pin f2g_in_en_B

# Module: I_BUF
# LinkedObject: delay_incdec
# Location: HR_1_3_1N
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto_418                             HR_1_3_1N     -mode MODE_BP_DIR_B_RX -internal_pin f2g_in_en_B

# Module: I_BUF
# LinkedObject: delay_load
# Location: HR_1_0_0P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto_419                             HR_1_0_0P     -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: din
# Location: HP_1_0_0P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto_420                             HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin f2g_in_en_A

# Module: I_DELAY
# LinkedObject: din
# Location: HP_1_0_0P
# Port: DLY_ADJ
# Signal: in:rule=half-first:f2g_trx_dly_adj
# Remap location from HP_1_0_0P to HP_1_0_0P
set_io   $f2g_trx_dly_adj_$ibuf_delay_adj_2    HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin f2g_trx_dly_adj

# Module: I_DELAY
# LinkedObject: din
# Location: HP_1_0_0P
# Port: DLY_INCDEC
# Signal: in:rule=half-first:f2g_trx_dly_inc
# Remap location from HP_1_0_0P to HP_1_0_0P
set_io   $f2g_trx_dly_inc_$ibuf_delay_incdec_2 HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin f2g_trx_dly_inc

# Module: I_DELAY
# LinkedObject: din
# Location: HP_1_0_0P
# Port: DLY_LOAD
# Signal: in:rule=half-first:f2g_trx_dly_ld
# Remap location from HP_1_0_0P to HP_1_0_0P
set_io   $f2g_trx_dly_ld_$ibuf_delay_load_2    HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin f2g_trx_dly_ld

# Module: I_DELAY
# LinkedObject: din
# Location: HP_1_0_0P
# Port: DLY_TAP_VALUE
# Signal: out:rule=half-first:g2f_trx_dly_tap
# Remap location from HP_1_0_0P to HP_1_0_0P
set_io   $ifab_$obuf_i_delay_value[0]          HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin g2f_trx_dly_tap[0]
set_io   $ifab_$obuf_i_delay_value[1]          HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin g2f_trx_dly_tap[1]
set_io   $ifab_$obuf_i_delay_value[2]          HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin g2f_trx_dly_tap[2]
set_io   $ifab_$obuf_i_delay_value[3]          HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin g2f_trx_dly_tap[3]
set_io   $ifab_$obuf_i_delay_value[4]          HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin g2f_trx_dly_tap[4]
set_io   $ifab_$obuf_i_delay_value[5]          HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin g2f_trx_dly_tap[5]

# Module: I_DDR
# LinkedObject: din
# Location: HP_1_0_0P
# Port: E
# Signal: in:TO_BE_DETERMINED
# Skip reason: TO_BE_DETERMINED
# set_io $ofab_$ibuf_enable_2                  HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin TO_BE_DETERMINED

# Module: I_DDR
# LinkedObject: din
# Location: HP_1_0_0P
# Port: R
# Signal: in:TO_BE_DETERMINED
# Skip reason: TO_BE_DETERMINED
# set_io $f2g_trx_reset_n_A_$ibuf_reset_2      HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin TO_BE_DETERMINED

# Module: I_BUF
# LinkedObject: enable
# Location: HP_1_3_1N
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto_421                             HP_1_3_1N     -mode MODE_BP_DIR_B_RX -internal_pin f2g_in_en_B

# Module: I_BUF
# LinkedObject: reset
# Location: HP_1_2_1P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto_422                             HP_1_2_1P     -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: O_BUFT
# LinkedObject: dout
# Location: HP_1_1_0N
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_423                             HP_1_1_0N     -mode MODE_BP_DDR_B_TX -internal_pin f2g_tx_oe_B

# Module: O_DELAY
# LinkedObject: dout
# Location: HP_1_1_0N
# Port: DLY_ADJ
# Signal: in:rule=half-first:f2g_trx_dly_adj
# Remap location from HP_1_1_0N to HP_1_0_0P
# Fail reason: Assigned location HP_1_0_0P and internal signal f2g_trx_dly_adj had already been used
# set_io $f2g_trx_dly_adj_$ibuf_delay_adj      HP_1_0_0P     -mode MODE_BP_DDR_B_TX -internal_pin f2g_trx_dly_adj

# Module: O_DELAY
# LinkedObject: dout
# Location: HP_1_1_0N
# Port: DLY_INCDEC
# Signal: in:rule=half-first:f2g_trx_dly_inc
# Remap location from HP_1_1_0N to HP_1_0_0P
# Fail reason: Assigned location HP_1_0_0P and internal signal f2g_trx_dly_inc had already been used
# set_io $f2g_trx_dly_inc_$ibuf_delay_incdec   HP_1_0_0P     -mode MODE_BP_DDR_B_TX -internal_pin f2g_trx_dly_inc

# Module: O_DELAY
# LinkedObject: dout
# Location: HP_1_1_0N
# Port: DLY_LOAD
# Signal: in:rule=half-first:f2g_trx_dly_ld
# Remap location from HP_1_1_0N to HP_1_0_0P
# Fail reason: Assigned location HP_1_0_0P and internal signal f2g_trx_dly_ld had already been used
# set_io $f2g_trx_dly_ld_$ibuf_delay_load      HP_1_0_0P     -mode MODE_BP_DDR_B_TX -internal_pin f2g_trx_dly_ld

# Module: O_DELAY
# LinkedObject: dout
# Location: HP_1_1_0N
# Port: DLY_TAP_VALUE
# Signal: out:rule=half-first:g2f_trx_dly_tap
# Remap location from HP_1_1_0N to HP_1_0_0P
# Fail reason: Assigned location HP_1_0_0P and internal signal g2f_trx_dly_tap[0] had already been used
# Fail reason: Assigned location HP_1_0_0P and internal signal g2f_trx_dly_tap[1] had already been used
# Fail reason: Assigned location HP_1_0_0P and internal signal g2f_trx_dly_tap[2] had already been used
# Fail reason: Assigned location HP_1_0_0P and internal signal g2f_trx_dly_tap[3] had already been used
# Fail reason: Assigned location HP_1_0_0P and internal signal g2f_trx_dly_tap[4] had already been used
# Fail reason: Assigned location HP_1_0_0P and internal signal g2f_trx_dly_tap[5] had already been used
# set_io $ifab_$obuf_o_delay_value[0]          HP_1_0_0P     -mode MODE_BP_DDR_B_TX -internal_pin g2f_trx_dly_tap[0]
# set_io $ifab_$obuf_o_delay_value[1]          HP_1_0_0P     -mode MODE_BP_DDR_B_TX -internal_pin g2f_trx_dly_tap[1]
# set_io $ifab_$obuf_o_delay_value[2]          HP_1_0_0P     -mode MODE_BP_DDR_B_TX -internal_pin g2f_trx_dly_tap[2]
# set_io $ifab_$obuf_o_delay_value[3]          HP_1_0_0P     -mode MODE_BP_DDR_B_TX -internal_pin g2f_trx_dly_tap[3]
# set_io $ifab_$obuf_o_delay_value[4]          HP_1_0_0P     -mode MODE_BP_DDR_B_TX -internal_pin g2f_trx_dly_tap[4]
# set_io $ifab_$obuf_o_delay_value[5]          HP_1_0_0P     -mode MODE_BP_DDR_B_TX -internal_pin g2f_trx_dly_tap[5]

# Module: O_DDR
# LinkedObject: dout
# Location: HP_1_1_0N
# Port: E
# Signal: in:TO_BE_DETERMINED
# Skip reason: TO_BE_DETERMINED
# set_io $ofab_$ibuf_enable                    HP_1_1_0N     -mode MODE_BP_DDR_B_TX -internal_pin TO_BE_DETERMINED

# Module: O_DDR
# LinkedObject: dout
# Location: HP_1_1_0N
# Port: R
# Signal: in:TO_BE_DETERMINED
# Skip reason: TO_BE_DETERMINED
# set_io $f2g_trx_reset_n_A_$ibuf_reset        HP_1_1_0N     -mode MODE_BP_DDR_B_TX -internal_pin TO_BE_DETERMINED

# Module: O_BUFT
# LinkedObject: i_delay_value[0]
# Location: HR_5_0_0P
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_424                             HR_5_0_0P     -mode MODE_BP_DIR_A_TX -internal_pin f2g_tx_oe_A

# Module: O_BUFT
# LinkedObject: i_delay_value[1]
# Location: HR_5_1_0N
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_425                             HR_5_1_0N     -mode MODE_BP_DIR_B_TX -internal_pin f2g_tx_oe_B

# Module: O_BUFT
# LinkedObject: i_delay_value[2]
# Location: HR_5_2_1P
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_426                             HR_5_2_1P     -mode MODE_BP_DIR_A_TX -internal_pin f2g_tx_oe_A

# Module: O_BUFT
# LinkedObject: i_delay_value[3]
# Location: HR_5_3_1N
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_427                             HR_5_3_1N     -mode MODE_BP_DIR_B_TX -internal_pin f2g_tx_oe_B

# Module: O_BUFT
# LinkedObject: i_delay_value[4]
# Location: HR_5_4_2P
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_428                             HR_5_4_2P     -mode MODE_BP_DIR_A_TX -internal_pin f2g_tx_oe_A

# Module: O_BUFT
# LinkedObject: i_delay_value[5]
# Location: HR_5_5_2N
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_429                             HR_5_5_2N     -mode MODE_BP_DIR_B_TX -internal_pin f2g_tx_oe_B

# Module: O_BUFT
# LinkedObject: o_delay_value[0]
# Location: HR_5_6_3P
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_430                             HR_5_6_3P     -mode MODE_BP_DIR_A_TX -internal_pin f2g_tx_oe_A

# Module: O_BUFT
# LinkedObject: o_delay_value[1]
# Location: HR_5_7_3N
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_431                             HR_5_7_3N     -mode MODE_BP_DIR_B_TX -internal_pin f2g_tx_oe_B

# Module: O_BUFT
# LinkedObject: o_delay_value[2]
# Location: HR_5_8_4P
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_432                             HR_5_8_4P     -mode MODE_BP_DIR_A_TX -internal_pin f2g_tx_oe_A

# Module: O_BUFT
# LinkedObject: o_delay_value[3]
# Location: HR_5_9_4N
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_433                             HR_5_9_4N     -mode MODE_BP_DIR_B_TX -internal_pin f2g_tx_oe_B

# Module: O_BUFT
# LinkedObject: o_delay_value[4]
# Location: HR_5_CC_18_9P
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_434                             HR_5_CC_18_9P -mode MODE_BP_DIR_A_TX -internal_pin f2g_tx_oe_A

# Module: O_BUFT
# LinkedObject: o_delay_value[5]
# Location: HR_5_CC_19_9N
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_435                             HR_5_CC_19_9N -mode MODE_BP_DIR_B_TX -internal_pin f2g_tx_oe_B

# Module: I_BUF
# LinkedObject: clk
# Location: HP_1_CC_18_9P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto_436                             HP_1_CC_18_9P -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

#############
#
# Each gearbox core clock
#
#############
# Module: I_DELAY
# Name: i_delay
# Location: HP_1_0_0P
# Port: CLK_IN
# Net: clk_clk_buf
# Slot: 0
set_core_clk HP_1_0_0P 0

# Module: O_DELAY
# Name: o_delay
# Location: HP_1_1_0N
# Port: CLK_IN
# Net: clk_clk_buf
# Slot: 0
# Skip reason: Had been defined by I_DELAY i_delay

# Module: O_DDR
# Name: o_ddr
# Location: HP_1_1_0N
# Port: C
# Net: clk_clk_buf
# Slot: 0
# Skip reason: Had been defined by I_DELAY i_delay

