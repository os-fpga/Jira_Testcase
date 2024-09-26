#############
#
# Fabric clock assignment
#
#############
# This clock need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock clk (Physical port name, clock module: CLK_BUF clk_buf)
# set_clock_pin -device_clock clk[0] -design_clock clk_clk_buf (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock clk_clk_buf

#############
#
# Each pin mode and location assignment
#
#############
# Pin      clk              :: I_BUF |-> CLK_BUF
# set_mode MODE_BP_DIR_A_RX HP_1_CC_18_9P
# set_io   clk              HP_1_CC_18_9P        --> (original)
set_io     clk_ibuf         HP_1_CC_18_9P        -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      din              :: I_BUF
# set_mode MODE_BP_DIR_A_RX HP_1_0_0P
# set_io   din              HP_1_0_0P            --> (original)
set_io     din_ibuf         HP_1_0_0P            -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      dout             :: O_BUFT
# set_mode MODE_BP_DIR_A_TX HP_1_2_1P
# set_io   dout             HP_1_2_1P            --> (original)
set_io     dout_obuf        HP_1_2_1P            -mode          MODE_BP_DIR_A_TX -internal_pin f2g_tx_out[0]_A

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
set_io $auto_426 HP_1_CC_18_9P -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: din
# Location: HP_1_0_0P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io $auto_427 HP_1_0_0P     -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: O_BUFT
# LinkedObject: dout
# Location: HP_1_2_1P
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io $auto_428 HP_1_2_1P     -mode MODE_BP_DIR_A_TX -internal_pin f2g_tx_oe_A

#############
#
# Each gearbox core clock
#
#############
