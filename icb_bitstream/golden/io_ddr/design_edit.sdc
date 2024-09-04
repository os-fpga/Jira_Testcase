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
# Pin      enable           :: I_BUF
# set_mode MODE_BP_DIR_B_RX HP_1_3_1N
# set_io   enable           HP_1_3_1N            --> (original)
set_io     $ibuf_enable     HP_1_2_1P            -mode          MODE_BP_DIR_B_RX -internal_pin g2f_rx_in[5]_A

# Pin      reset            :: I_BUF
# set_mode MODE_BP_DIR_A_RX HP_1_2_1P
# set_io   reset            HP_1_2_1P            --> (original)
set_io     $ibuf_reset      HP_1_2_1P            -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Clock data from object clk port O is not routed to fabric
# Pin      clk              :: I_BUF |-> CLK_BUF

# Pin      din              :: I_BUF |-> I_DDR
# set_mode MODE_BP_DDR_A_RX HP_1_0_0P
# set_io   din              HP_1_0_0P            --> (original)
set_io     o_ddr_d          HP_1_0_0P            -mode          MODE_BP_DDR_A_RX -internal_pin g2f_rx_in[0]_A
set_io     $delete_wire$399 HP_1_0_0P            -mode          MODE_BP_DDR_A_RX -internal_pin g2f_rx_in[1]_A

# Pin      dout             :: O_DDR |-> O_BUFT
# set_mode MODE_BP_DDR_B_TX HP_1_1_0N
# set_io   dout             HP_1_1_0N            --> (original)
set_io     $auto_405        HP_1_0_0P            -mode          MODE_BP_DDR_B_TX -internal_pin f2g_tx_out[5]_A
# set_io   __const_bit_0__  HP_1_0_0P            -mode          MODE_BP_DDR_B_TX -internal_pin f2g_tx_out[6]_A

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: enable
# Location: HP_1_3_1N
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto_400                        HP_1_3_1N     -mode MODE_BP_DIR_B_RX -internal_pin f2g_in_en_B

# Module: I_BUF
# LinkedObject: reset
# Location: HP_1_2_1P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto_401                        HP_1_2_1P     -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: clk
# Location: HP_1_CC_18_9P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto_402                        HP_1_CC_18_9P -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: din
# Location: HP_1_0_0P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto_403                        HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin f2g_in_en_A

# Module: I_DDR
# LinkedObject: din
# Location: HP_1_0_0P
# Port: E
# Signal: in:TO_BE_DETERMINED
# Skip reason: TO_BE_DETERMINED
# set_io $ofab_$ibuf_enable_2             HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin TO_BE_DETERMINED

# Module: I_DDR
# LinkedObject: din
# Location: HP_1_0_0P
# Port: R
# Signal: in:TO_BE_DETERMINED
# Skip reason: TO_BE_DETERMINED
# set_io $f2g_trx_reset_n_A_$ibuf_reset_2 HP_1_0_0P     -mode MODE_BP_DDR_A_RX -internal_pin TO_BE_DETERMINED

# Module: O_BUFT
# LinkedObject: dout
# Location: HP_1_1_0N
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io   $auto_404                        HP_1_1_0N     -mode MODE_BP_DDR_B_TX -internal_pin f2g_tx_oe_B

# Module: O_DDR
# LinkedObject: dout
# Location: HP_1_1_0N
# Port: E
# Signal: in:TO_BE_DETERMINED
# Skip reason: TO_BE_DETERMINED
# set_io $ofab_$ibuf_enable               HP_1_1_0N     -mode MODE_BP_DDR_B_TX -internal_pin TO_BE_DETERMINED

# Module: O_DDR
# LinkedObject: dout
# Location: HP_1_1_0N
# Port: R
# Signal: in:TO_BE_DETERMINED
# Skip reason: TO_BE_DETERMINED
# set_io $f2g_trx_reset_n_A_$ibuf_reset   HP_1_1_0N     -mode MODE_BP_DDR_B_TX -internal_pin TO_BE_DETERMINED

#############
#
# Each gearbox core clock
#
#############
# Module: O_DDR
# Name: o_ddr
# Location: HP_1_1_0N
# Port: C
# Net: clk_clk_buf
# Slot: 0
set_core_clk HP_1_1_0N 0

