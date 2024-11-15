#############
#
# Fabric clock assignment
#
#############
# This clock need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock clock0 (Physical port name, clock module: CLK_BUF $clkbuf$and2.$ibuf_clock0)
# set_clock_pin -device_clock clk[0] -design_clock $clk_buf_$ibuf_clock0 (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $clk_buf_$ibuf_clock0

#############
#
# Each pin mode and location assignment
#
#############
# Pin      a                   :: I_BUF
# set_mode MODE_BP_DIR_A_RX    HR_2_0_0P
# set_io   a                   HR_2_0_0P            --> (original)
set_io     $ibuf_a             HR_2_0_0P            -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      b                   :: I_BUF
# set_mode MODE_BP_DIR_A_RX    HR_1_16_8P
# set_io   b                   HR_1_16_8P           --> (original)
set_io     $ibuf_b             HR_1_16_8P           -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Skip reason: Clock data from object clock0 port O does not need to route to fabric
# Pin      clock0              :: I_BUF |-> CLK_BUF

# Pin      id[0]               :: I_BUF
# set_mode MODE_BP_DIR_A_RX    HR_5_0_0P
# set_io   id[0]               HR_5_0_0P            --> (original)
set_io     $ibuf_id[0]         HR_5_0_0P            -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      id[1]               :: I_BUF
# set_mode MODE_BP_DIR_A_RX    HR_5_2_1P
# set_io   id[1]               HR_5_2_1P            --> (original)
set_io     $ibuf_id[1]         HR_5_2_1P            -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      id[2]               :: I_BUF
# set_mode MODE_BP_DIR_A_RX    HR_5_4_2P
# set_io   id[2]               HR_5_4_2P            --> (original)
set_io     $ibuf_id[2]         HR_5_4_2P            -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      c                   :: O_BUFT
# set_mode MODE_BP_DIR_A_TX    HR_3_0_0P
# set_io   c                   HR_3_0_0P            --> (original)
set_io     $f2g_tx_out_$obuf_c HR_3_0_0P            -mode          MODE_BP_DIR_A_TX -internal_pin f2g_tx_out[0]_A

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: a
# Location: HR_2_0_0P
# Port: EN
# Signal: in:f2g_in_en_A
set_io $auto_1716 HR_2_0_0P  -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: b
# Location: HR_1_16_8P
# Port: EN
# Signal: in:f2g_in_en_A
set_io $auto_1717 HR_1_16_8P -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: clock0
# Location: HR_1_0_0P
# Port: EN
# Signal: in:f2g_in_en_A
set_io $auto_1718 HR_1_0_0P  -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: id[0]
# Location: HR_5_0_0P
# Port: EN
# Signal: in:f2g_in_en_A
set_io $auto_1719 HR_5_0_0P  -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: id[1]
# Location: HR_5_2_1P
# Port: EN
# Signal: in:f2g_in_en_A
set_io $auto_1720 HR_5_2_1P  -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: id[2]
# Location: HR_5_4_2P
# Port: EN
# Signal: in:f2g_in_en_A
set_io $auto_1721 HR_5_4_2P  -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: O_BUFT
# LinkedObject: c
# Location: HR_3_0_0P
# Port: T
# Signal: in:f2g_tx_oe_A
set_io $auto_1722 HR_3_0_0P  -mode MODE_BP_DIR_A_TX -internal_pin f2g_tx_oe_A

#############
#
# Each gearbox core clock
#
#############
