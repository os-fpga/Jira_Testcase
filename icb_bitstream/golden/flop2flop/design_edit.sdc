#############
#
# Fabric clock assignment
#
#############
# This clock need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock clk (Physical port name, clock module: CLK_BUF $clkbuf$top.$ibuf_clk)
# set_clock_pin -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk

#############
#
# Each pin mode and location assignment
#
#############
# Clock data from object clk port O is not routed to fabric
# Pin      clk              :: I_BUF |-> CLK_BUF

# Pin      din              :: I_BUF
# set_mode MODE_BP_DIR_A_RX HP_1_0_0P
# set_io   din              HP_1_0_0P            --> (original)
set_io     $ibuf_din        HP_1_0_0P            -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      dout             :: O_BUFT
# set_mode MODE_BP_DIR_B_TX HP_1_1_0N
# set_io   dout             HP_1_1_0N            --> (original)
set_io     $obuf_dout       HP_1_0_0P            -mode          MODE_BP_DIR_B_TX -internal_pin f2g_tx_out[5]_A

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: clk
# Location: HP_1_CC_18_9P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io $auto_431 HP_1_CC_18_9P -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: din
# Location: HP_1_0_0P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io $auto_432 HP_1_0_0P     -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: O_BUFT
# LinkedObject: dout
# Location: HP_1_1_0N
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io $auto_433 HP_1_1_0N     -mode MODE_BP_DIR_B_TX -internal_pin f2g_tx_oe_B

#############
#
# Each gearbox core clock
#
#############
