#############
#
# Fabric clock assignment
#
#############

#############
#
# Each pin mode and location assignment
#
#############
# Pin      a                :: I_BUF
# set_mode MODE_BP_DIR_A_RX HR_1_2_1P
# set_io   a                HR_1_2_1P --> (original)
set_io     $ibuf_a          HR_1_2_1P -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      b                :: O_BUFT
# set_mode MODE_BP_DIR_B_TX HR_1_3_1N
# set_io   b                HR_1_3_1N --> (original)
set_io     $auto_396        HR_1_2_1P -mode          MODE_BP_DIR_B_TX -internal_pin f2g_tx_out[5]_A

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: a
# Location: HR_1_2_1P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io $auto_394 HR_1_2_1P -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: O_BUFT
# LinkedObject: b
# Location: HR_1_3_1N
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io $auto_395 HR_1_3_1N -mode MODE_BP_DIR_B_TX -internal_pin f2g_tx_oe_B

#############
#
# Each gearbox core clock
#
#############
