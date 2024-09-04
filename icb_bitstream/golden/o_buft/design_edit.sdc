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
# Pin      din              :: I_BUF
# set_mode MODE_BP_DIR_A_RX HP_1_0_0P
# set_io   din              HP_1_0_0P --> (original)
set_io     $ibuf_din        HP_1_0_0P -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      enable           :: I_BUF
# set_mode MODE_BP_DIR_B_RX HP_1_3_1N
# set_io   enable           HP_1_3_1N --> (original)
set_io     $ibuf_enable     HP_1_2_1P -mode          MODE_BP_DIR_B_RX -internal_pin g2f_rx_in[5]_A

# Pin      dout             :: O_BUFT
# set_mode MODE_BP_DIR_B_TX HP_1_1_0N
# set_io   dout             HP_1_1_0N --> (original)
set_io     $auto_400        HP_1_0_0P -mode          MODE_BP_DIR_B_TX -internal_pin f2g_tx_out[5]_A

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: din
# Location: HP_1_0_0P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io $auto_398                 HP_1_0_0P -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: enable
# Location: HP_1_3_1N
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io $auto_399                 HP_1_3_1N -mode MODE_BP_DIR_B_RX -internal_pin f2g_in_en_B

# Module: O_BUFT
# LinkedObject: dout
# Location: HP_1_1_0N
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
set_io $f2g_tx_oe_A_$ibuf_enable HP_1_1_0N -mode MODE_BP_DIR_B_TX -internal_pin f2g_tx_oe_B

#############
#
# Each gearbox core clock
#
#############
