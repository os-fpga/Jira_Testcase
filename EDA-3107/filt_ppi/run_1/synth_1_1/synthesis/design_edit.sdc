#############
#
# Fabric clock assignment
#
#############
# set_clock_pin -device_clock clk[0] -design_clock i_clk (Physical port name)
# set_clock_pin -device_clock clk[0] -design_clock $clk_buf_$ibuf_i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $clk_buf_$ibuf_i_clk

# set_clock_pin -device_clock clk[1] -design_clock i_fclk (Physical port name)
# set_clock_pin -device_clock clk[1] -design_clock $clk_buf_$ibuf_i_fclk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[1] -design_clock $clk_buf_$ibuf_i_fclk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[2] -design_clock FABRIC_CLKBUF#0 (Physical port name)
# set_clock_pin -device_clock clk[2] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[0].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[2] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[0].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[0] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[0].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[0] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[0].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[3] -design_clock FABRIC_CLKBUF#1 (Physical port name)
# set_clock_pin -device_clock clk[3] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[10].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[3] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[10].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[1] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[10].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[1] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[10].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[4] -design_clock FABRIC_CLKBUF#2 (Physical port name)
# set_clock_pin -device_clock clk[4] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[11].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[4] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[11].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[2] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[11].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[2] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[11].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[5] -design_clock FABRIC_CLKBUF#3 (Physical port name)
# set_clock_pin -device_clock clk[5] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[12].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[5] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[12].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[3] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[12].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[3] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[12].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[6] -design_clock FABRIC_CLKBUF#4 (Physical port name)
# set_clock_pin -device_clock clk[6] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[13].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[6] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[13].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[4] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[13].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[4] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[13].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[7] -design_clock FABRIC_CLKBUF#5 (Physical port name)
# set_clock_pin -device_clock clk[7] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[14].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[7] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[14].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[5] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[14].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[5] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[14].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[8] -design_clock FABRIC_CLKBUF#6 (Physical port name)
# set_clock_pin -device_clock clk[8] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[15].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[8] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[15].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[6] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[15].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[6] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[15].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[9] -design_clock FABRIC_CLKBUF#7 (Physical port name)
# set_clock_pin -device_clock clk[9] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[16].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[9] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[16].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[7] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[16].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[7] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[16].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[10] -design_clock FABRIC_CLKBUF#8 (Physical port name)
# set_clock_pin -device_clock clk[10] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[17].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[10] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[17].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[8] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[17].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[8] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[17].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[11] -design_clock FABRIC_CLKBUF#9 (Physical port name)
# set_clock_pin -device_clock clk[11] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[18].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[11] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[18].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[9] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[18].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[9] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[18].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[12] -design_clock FABRIC_CLKBUF#10 (Physical port name)
# set_clock_pin -device_clock clk[12] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[19].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[12] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[19].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[10] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[19].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[10] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[19].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[13] -design_clock FABRIC_CLKBUF#11 (Physical port name)
# set_clock_pin -device_clock clk[13] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[1].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[13] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[1].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[11] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[1].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[11] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[1].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[14] -design_clock FABRIC_CLKBUF#12 (Physical port name)
# set_clock_pin -device_clock clk[14] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[20].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[14] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[20].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[12] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[20].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[12] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[20].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[15] -design_clock FABRIC_CLKBUF#13 (Physical port name)
# set_clock_pin -device_clock clk[15] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[21].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[15] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[21].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[13] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[21].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[13] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[21].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[16] -design_clock FABRIC_CLKBUF#14 (Physical port name)
# set_clock_pin -device_clock clk[16] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[22].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[16] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[22].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[14] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[22].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[14] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[22].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[17] -design_clock FABRIC_CLKBUF#15 (Physical port name)
# set_clock_pin -device_clock clk[17] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[23].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[17] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[23].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[15] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[23].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[15] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[23].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[18] -design_clock FABRIC_CLKBUF#16 (Physical port name)
# set_clock_pin -device_clock clk[18] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[24].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[18] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[24].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[16] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[24].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[16] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[24].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[19] -design_clock FABRIC_CLKBUF#17 (Physical port name)
# set_clock_pin -device_clock clk[19] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[25].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[19] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[25].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[17] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[25].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[17] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[25].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[20] -design_clock FABRIC_CLKBUF#18 (Physical port name)
# set_clock_pin -device_clock clk[20] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[26].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[20] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[26].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[18] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[26].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[18] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[26].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[21] -design_clock FABRIC_CLKBUF#19 (Physical port name)
# set_clock_pin -device_clock clk[21] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[27].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[21] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[27].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[19] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[27].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[19] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[27].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[22] -design_clock FABRIC_CLKBUF#20 (Physical port name)
# set_clock_pin -device_clock clk[22] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[28].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[22] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[28].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[20] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[28].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[20] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[28].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[23] -design_clock FABRIC_CLKBUF#21 (Physical port name)
# set_clock_pin -device_clock clk[23] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[29].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[23] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[29].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[21] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[29].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[21] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[29].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[24] -design_clock FABRIC_CLKBUF#22 (Physical port name)
# set_clock_pin -device_clock clk[24] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[2].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[24] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[2].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[22] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[2].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[22] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[2].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[25] -design_clock FABRIC_CLKBUF#23 (Physical port name)
# set_clock_pin -device_clock clk[25] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[3].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[25] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[3].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[23] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[3].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[23] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[3].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[26] -design_clock FABRIC_CLKBUF#24 (Physical port name)
# set_clock_pin -device_clock clk[26] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[4].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[26] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[4].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[24] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[4].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[24] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[4].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[27] -design_clock FABRIC_CLKBUF#25 (Physical port name)
# set_clock_pin -device_clock clk[27] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[5].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[27] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[5].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[25] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[5].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[25] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[5].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[28] -design_clock FABRIC_CLKBUF#26 (Physical port name)
# set_clock_pin -device_clock clk[28] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[6].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[28] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[6].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[26] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[6].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[26] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[6].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[29] -design_clock FABRIC_CLKBUF#27 (Physical port name)
# set_clock_pin -device_clock clk[29] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[7].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[29] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[7].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[27] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[7].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[27] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[7].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[30] -design_clock FABRIC_CLKBUF#28 (Physical port name)
# set_clock_pin -device_clock clk[30] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[8].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[30] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[8].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[28] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[8].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[28] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[8].REG_COMMUTATOR_INP_DATA.i_clk

# This is fabric clock buffer
# set_clock_pin -device_clock clk[31] -design_clock FABRIC_CLKBUF#29 (Physical port name)
# set_clock_pin -device_clock clk[31] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[9].REG_COMMUTATOR_INP_DATA.i_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[31] -design_clock $fclk_buf_ppi_commutator.g_commutator_ccw.g_reg_comm_inp[9].REG_COMMUTATOR_INP_DATA.i_clk

# For fabric clock buffer output
# set_clock_out -device_clock clk[29] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[9].REG_COMMUTATOR_INP_DATA.i_clk
set_clock_out   -device_clock clk[29] -design_clock ppi_commutator.g_commutator_ccw.g_reg_comm_inp[9].REG_COMMUTATOR_INP_DATA.i_clk

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin i_clk      :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin i_data[0]  :: I_BUF

# Pin location is not assigned
# Pin i_data[1]  :: I_BUF

# Pin location is not assigned
# Pin i_data[2]  :: I_BUF

# Pin location is not assigned
# Pin i_data[3]  :: I_BUF

# Pin location is not assigned
# Pin i_data[4]  :: I_BUF

# Pin location is not assigned
# Pin i_data[5]  :: I_BUF

# Pin location is not assigned
# Pin i_data[6]  :: I_BUF

# Pin location is not assigned
# Pin i_data[7]  :: I_BUF

# Pin location is not assigned
# Pin i_ena      :: I_BUF

# Pin location is not assigned
# Pin i_fclk     :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin i_rst_an   :: I_BUF

# Pin location is not assigned
# Pin o_data[0]  :: O_BUFT

# Pin location is not assigned
# Pin o_data[1]  :: O_BUFT

# Pin location is not assigned
# Pin o_data[10] :: O_BUFT

# Pin location is not assigned
# Pin o_data[11] :: O_BUFT

# Pin location is not assigned
# Pin o_data[12] :: O_BUFT

# Pin location is not assigned
# Pin o_data[13] :: O_BUFT

# Pin location is not assigned
# Pin o_data[14] :: O_BUFT

# Pin location is not assigned
# Pin o_data[15] :: O_BUFT

# Pin location is not assigned
# Pin o_data[16] :: O_BUFT

# Pin location is not assigned
# Pin o_data[17] :: O_BUFT

# Pin location is not assigned
# Pin o_data[18] :: O_BUFT

# Pin location is not assigned
# Pin o_data[19] :: O_BUFT

# Pin location is not assigned
# Pin o_data[2]  :: O_BUFT

# Pin location is not assigned
# Pin o_data[20] :: O_BUFT

# Pin location is not assigned
# Pin o_data[21] :: O_BUFT

# Pin location is not assigned
# Pin o_data[22] :: O_BUFT

# Pin location is not assigned
# Pin o_data[23] :: O_BUFT

# Pin location is not assigned
# Pin o_data[24] :: O_BUFT

# Pin location is not assigned
# Pin o_data[25] :: O_BUFT

# Pin location is not assigned
# Pin o_data[3]  :: O_BUFT

# Pin location is not assigned
# Pin o_data[4]  :: O_BUFT

# Pin location is not assigned
# Pin o_data[5]  :: O_BUFT

# Pin location is not assigned
# Pin o_data[6]  :: O_BUFT

# Pin location is not assigned
# Pin o_data[7]  :: O_BUFT

# Pin location is not assigned
# Pin o_data[8]  :: O_BUFT

# Pin location is not assigned
# Pin o_data[9]  :: O_BUFT

# Pin location is not assigned
# Pin o_sclk     :: O_BUFT

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: i_clk
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i_data[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i_data[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i_data[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i_data[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i_data[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i_data[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i_data[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i_data[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i_ena
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i_fclk
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: i_rst_an
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[0]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[1]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[10]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[11]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[12]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[13]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[14]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[15]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[16]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[17]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[18]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[19]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[2]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[20]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[21]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[22]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[23]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[24]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[25]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[3]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[4]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[5]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[6]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[7]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[8]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_data[9]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: o_sclk
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

#############
#
# Each gearbox core clock
#
#############
