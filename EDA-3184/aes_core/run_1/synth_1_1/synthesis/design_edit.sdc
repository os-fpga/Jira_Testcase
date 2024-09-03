#############
#
# Fabric clock assignment
#
#############
# This clock need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock clk (Physical port name, clock module: CLK_BUF $clkbuf$aes_inv_cipher_top.$ibuf_clk)
# set_clock_pin -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin clk           :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin key[0]        :: I_BUF

# Pin location is not assigned
# Pin key[1]        :: I_BUF

# Pin location is not assigned
# Pin key[10]       :: I_BUF

# Pin location is not assigned
# Pin key[100]      :: I_BUF

# Pin location is not assigned
# Pin key[101]      :: I_BUF

# Pin location is not assigned
# Pin key[102]      :: I_BUF

# Pin location is not assigned
# Pin key[103]      :: I_BUF

# Pin location is not assigned
# Pin key[104]      :: I_BUF

# Pin location is not assigned
# Pin key[105]      :: I_BUF

# Pin location is not assigned
# Pin key[106]      :: I_BUF

# Pin location is not assigned
# Pin key[107]      :: I_BUF

# Pin location is not assigned
# Pin key[108]      :: I_BUF

# Pin location is not assigned
# Pin key[109]      :: I_BUF

# Pin location is not assigned
# Pin key[11]       :: I_BUF

# Pin location is not assigned
# Pin key[110]      :: I_BUF

# Pin location is not assigned
# Pin key[111]      :: I_BUF

# Pin location is not assigned
# Pin key[112]      :: I_BUF

# Pin location is not assigned
# Pin key[113]      :: I_BUF

# Pin location is not assigned
# Pin key[114]      :: I_BUF

# Pin location is not assigned
# Pin key[115]      :: I_BUF

# Pin location is not assigned
# Pin key[116]      :: I_BUF

# Pin location is not assigned
# Pin key[117]      :: I_BUF

# Pin location is not assigned
# Pin key[118]      :: I_BUF

# Pin location is not assigned
# Pin key[119]      :: I_BUF

# Pin location is not assigned
# Pin key[12]       :: I_BUF

# Pin location is not assigned
# Pin key[120]      :: I_BUF

# Pin location is not assigned
# Pin key[121]      :: I_BUF

# Pin location is not assigned
# Pin key[122]      :: I_BUF

# Pin location is not assigned
# Pin key[123]      :: I_BUF

# Pin location is not assigned
# Pin key[124]      :: I_BUF

# Pin location is not assigned
# Pin key[125]      :: I_BUF

# Pin location is not assigned
# Pin key[126]      :: I_BUF

# Pin location is not assigned
# Pin key[127]      :: I_BUF

# Pin location is not assigned
# Pin key[13]       :: I_BUF

# Pin location is not assigned
# Pin key[14]       :: I_BUF

# Pin location is not assigned
# Pin key[15]       :: I_BUF

# Pin location is not assigned
# Pin key[16]       :: I_BUF

# Pin location is not assigned
# Pin key[17]       :: I_BUF

# Pin location is not assigned
# Pin key[18]       :: I_BUF

# Pin location is not assigned
# Pin key[19]       :: I_BUF

# Pin location is not assigned
# Pin key[2]        :: I_BUF

# Pin location is not assigned
# Pin key[20]       :: I_BUF

# Pin location is not assigned
# Pin key[21]       :: I_BUF

# Pin location is not assigned
# Pin key[22]       :: I_BUF

# Pin location is not assigned
# Pin key[23]       :: I_BUF

# Pin location is not assigned
# Pin key[24]       :: I_BUF

# Pin location is not assigned
# Pin key[25]       :: I_BUF

# Pin location is not assigned
# Pin key[26]       :: I_BUF

# Pin location is not assigned
# Pin key[27]       :: I_BUF

# Pin location is not assigned
# Pin key[28]       :: I_BUF

# Pin location is not assigned
# Pin key[29]       :: I_BUF

# Pin location is not assigned
# Pin key[3]        :: I_BUF

# Pin location is not assigned
# Pin key[30]       :: I_BUF

# Pin location is not assigned
# Pin key[31]       :: I_BUF

# Pin location is not assigned
# Pin key[32]       :: I_BUF

# Pin location is not assigned
# Pin key[33]       :: I_BUF

# Pin location is not assigned
# Pin key[34]       :: I_BUF

# Pin location is not assigned
# Pin key[35]       :: I_BUF

# Pin location is not assigned
# Pin key[36]       :: I_BUF

# Pin location is not assigned
# Pin key[37]       :: I_BUF

# Pin location is not assigned
# Pin key[38]       :: I_BUF

# Pin location is not assigned
# Pin key[39]       :: I_BUF

# Pin location is not assigned
# Pin key[4]        :: I_BUF

# Pin location is not assigned
# Pin key[40]       :: I_BUF

# Pin location is not assigned
# Pin key[41]       :: I_BUF

# Pin location is not assigned
# Pin key[42]       :: I_BUF

# Pin location is not assigned
# Pin key[43]       :: I_BUF

# Pin location is not assigned
# Pin key[44]       :: I_BUF

# Pin location is not assigned
# Pin key[45]       :: I_BUF

# Pin location is not assigned
# Pin key[46]       :: I_BUF

# Pin location is not assigned
# Pin key[47]       :: I_BUF

# Pin location is not assigned
# Pin key[48]       :: I_BUF

# Pin location is not assigned
# Pin key[49]       :: I_BUF

# Pin location is not assigned
# Pin key[5]        :: I_BUF

# Pin location is not assigned
# Pin key[50]       :: I_BUF

# Pin location is not assigned
# Pin key[51]       :: I_BUF

# Pin location is not assigned
# Pin key[52]       :: I_BUF

# Pin location is not assigned
# Pin key[53]       :: I_BUF

# Pin location is not assigned
# Pin key[54]       :: I_BUF

# Pin location is not assigned
# Pin key[55]       :: I_BUF

# Pin location is not assigned
# Pin key[56]       :: I_BUF

# Pin location is not assigned
# Pin key[57]       :: I_BUF

# Pin location is not assigned
# Pin key[58]       :: I_BUF

# Pin location is not assigned
# Pin key[59]       :: I_BUF

# Pin location is not assigned
# Pin key[6]        :: I_BUF

# Pin location is not assigned
# Pin key[60]       :: I_BUF

# Pin location is not assigned
# Pin key[61]       :: I_BUF

# Pin location is not assigned
# Pin key[62]       :: I_BUF

# Pin location is not assigned
# Pin key[63]       :: I_BUF

# Pin location is not assigned
# Pin key[64]       :: I_BUF

# Pin location is not assigned
# Pin key[65]       :: I_BUF

# Pin location is not assigned
# Pin key[66]       :: I_BUF

# Pin location is not assigned
# Pin key[67]       :: I_BUF

# Pin location is not assigned
# Pin key[68]       :: I_BUF

# Pin location is not assigned
# Pin key[69]       :: I_BUF

# Pin location is not assigned
# Pin key[7]        :: I_BUF

# Pin location is not assigned
# Pin key[70]       :: I_BUF

# Pin location is not assigned
# Pin key[71]       :: I_BUF

# Pin location is not assigned
# Pin key[72]       :: I_BUF

# Pin location is not assigned
# Pin key[73]       :: I_BUF

# Pin location is not assigned
# Pin key[74]       :: I_BUF

# Pin location is not assigned
# Pin key[75]       :: I_BUF

# Pin location is not assigned
# Pin key[76]       :: I_BUF

# Pin location is not assigned
# Pin key[77]       :: I_BUF

# Pin location is not assigned
# Pin key[78]       :: I_BUF

# Pin location is not assigned
# Pin key[79]       :: I_BUF

# Pin location is not assigned
# Pin key[8]        :: I_BUF

# Pin location is not assigned
# Pin key[80]       :: I_BUF

# Pin location is not assigned
# Pin key[81]       :: I_BUF

# Pin location is not assigned
# Pin key[82]       :: I_BUF

# Pin location is not assigned
# Pin key[83]       :: I_BUF

# Pin location is not assigned
# Pin key[84]       :: I_BUF

# Pin location is not assigned
# Pin key[85]       :: I_BUF

# Pin location is not assigned
# Pin key[86]       :: I_BUF

# Pin location is not assigned
# Pin key[87]       :: I_BUF

# Pin location is not assigned
# Pin key[88]       :: I_BUF

# Pin location is not assigned
# Pin key[89]       :: I_BUF

# Pin location is not assigned
# Pin key[9]        :: I_BUF

# Pin location is not assigned
# Pin key[90]       :: I_BUF

# Pin location is not assigned
# Pin key[91]       :: I_BUF

# Pin location is not assigned
# Pin key[92]       :: I_BUF

# Pin location is not assigned
# Pin key[93]       :: I_BUF

# Pin location is not assigned
# Pin key[94]       :: I_BUF

# Pin location is not assigned
# Pin key[95]       :: I_BUF

# Pin location is not assigned
# Pin key[96]       :: I_BUF

# Pin location is not assigned
# Pin key[97]       :: I_BUF

# Pin location is not assigned
# Pin key[98]       :: I_BUF

# Pin location is not assigned
# Pin key[99]       :: I_BUF

# Pin location is not assigned
# Pin kld           :: I_BUF

# Pin location is not assigned
# Pin ld            :: I_BUF

# Pin location is not assigned
# Pin rst           :: I_BUF

# Pin location is not assigned
# Pin text_in[0]    :: I_BUF

# Pin location is not assigned
# Pin text_in[1]    :: I_BUF

# Pin location is not assigned
# Pin text_in[10]   :: I_BUF

# Pin location is not assigned
# Pin text_in[100]  :: I_BUF

# Pin location is not assigned
# Pin text_in[101]  :: I_BUF

# Pin location is not assigned
# Pin text_in[102]  :: I_BUF

# Pin location is not assigned
# Pin text_in[103]  :: I_BUF

# Pin location is not assigned
# Pin text_in[104]  :: I_BUF

# Pin location is not assigned
# Pin text_in[105]  :: I_BUF

# Pin location is not assigned
# Pin text_in[106]  :: I_BUF

# Pin location is not assigned
# Pin text_in[107]  :: I_BUF

# Pin location is not assigned
# Pin text_in[108]  :: I_BUF

# Pin location is not assigned
# Pin text_in[109]  :: I_BUF

# Pin location is not assigned
# Pin text_in[11]   :: I_BUF

# Pin location is not assigned
# Pin text_in[110]  :: I_BUF

# Pin location is not assigned
# Pin text_in[111]  :: I_BUF

# Pin location is not assigned
# Pin text_in[112]  :: I_BUF

# Pin location is not assigned
# Pin text_in[113]  :: I_BUF

# Pin location is not assigned
# Pin text_in[114]  :: I_BUF

# Pin location is not assigned
# Pin text_in[115]  :: I_BUF

# Pin location is not assigned
# Pin text_in[116]  :: I_BUF

# Pin location is not assigned
# Pin text_in[117]  :: I_BUF

# Pin location is not assigned
# Pin text_in[118]  :: I_BUF

# Pin location is not assigned
# Pin text_in[119]  :: I_BUF

# Pin location is not assigned
# Pin text_in[12]   :: I_BUF

# Pin location is not assigned
# Pin text_in[120]  :: I_BUF

# Pin location is not assigned
# Pin text_in[121]  :: I_BUF

# Pin location is not assigned
# Pin text_in[122]  :: I_BUF

# Pin location is not assigned
# Pin text_in[123]  :: I_BUF

# Pin location is not assigned
# Pin text_in[124]  :: I_BUF

# Pin location is not assigned
# Pin text_in[125]  :: I_BUF

# Pin location is not assigned
# Pin text_in[126]  :: I_BUF

# Pin location is not assigned
# Pin text_in[127]  :: I_BUF

# Pin location is not assigned
# Pin text_in[13]   :: I_BUF

# Pin location is not assigned
# Pin text_in[14]   :: I_BUF

# Pin location is not assigned
# Pin text_in[15]   :: I_BUF

# Pin location is not assigned
# Pin text_in[16]   :: I_BUF

# Pin location is not assigned
# Pin text_in[17]   :: I_BUF

# Pin location is not assigned
# Pin text_in[18]   :: I_BUF

# Pin location is not assigned
# Pin text_in[19]   :: I_BUF

# Pin location is not assigned
# Pin text_in[2]    :: I_BUF

# Pin location is not assigned
# Pin text_in[20]   :: I_BUF

# Pin location is not assigned
# Pin text_in[21]   :: I_BUF

# Pin location is not assigned
# Pin text_in[22]   :: I_BUF

# Pin location is not assigned
# Pin text_in[23]   :: I_BUF

# Pin location is not assigned
# Pin text_in[24]   :: I_BUF

# Pin location is not assigned
# Pin text_in[25]   :: I_BUF

# Pin location is not assigned
# Pin text_in[26]   :: I_BUF

# Pin location is not assigned
# Pin text_in[27]   :: I_BUF

# Pin location is not assigned
# Pin text_in[28]   :: I_BUF

# Pin location is not assigned
# Pin text_in[29]   :: I_BUF

# Pin location is not assigned
# Pin text_in[3]    :: I_BUF

# Pin location is not assigned
# Pin text_in[30]   :: I_BUF

# Pin location is not assigned
# Pin text_in[31]   :: I_BUF

# Pin location is not assigned
# Pin text_in[32]   :: I_BUF

# Pin location is not assigned
# Pin text_in[33]   :: I_BUF

# Pin location is not assigned
# Pin text_in[34]   :: I_BUF

# Pin location is not assigned
# Pin text_in[35]   :: I_BUF

# Pin location is not assigned
# Pin text_in[36]   :: I_BUF

# Pin location is not assigned
# Pin text_in[37]   :: I_BUF

# Pin location is not assigned
# Pin text_in[38]   :: I_BUF

# Pin location is not assigned
# Pin text_in[39]   :: I_BUF

# Pin location is not assigned
# Pin text_in[4]    :: I_BUF

# Pin location is not assigned
# Pin text_in[40]   :: I_BUF

# Pin location is not assigned
# Pin text_in[41]   :: I_BUF

# Pin location is not assigned
# Pin text_in[42]   :: I_BUF

# Pin location is not assigned
# Pin text_in[43]   :: I_BUF

# Pin location is not assigned
# Pin text_in[44]   :: I_BUF

# Pin location is not assigned
# Pin text_in[45]   :: I_BUF

# Pin location is not assigned
# Pin text_in[46]   :: I_BUF

# Pin location is not assigned
# Pin text_in[47]   :: I_BUF

# Pin location is not assigned
# Pin text_in[48]   :: I_BUF

# Pin location is not assigned
# Pin text_in[49]   :: I_BUF

# Pin location is not assigned
# Pin text_in[5]    :: I_BUF

# Pin location is not assigned
# Pin text_in[50]   :: I_BUF

# Pin location is not assigned
# Pin text_in[51]   :: I_BUF

# Pin location is not assigned
# Pin text_in[52]   :: I_BUF

# Pin location is not assigned
# Pin text_in[53]   :: I_BUF

# Pin location is not assigned
# Pin text_in[54]   :: I_BUF

# Pin location is not assigned
# Pin text_in[55]   :: I_BUF

# Pin location is not assigned
# Pin text_in[56]   :: I_BUF

# Pin location is not assigned
# Pin text_in[57]   :: I_BUF

# Pin location is not assigned
# Pin text_in[58]   :: I_BUF

# Pin location is not assigned
# Pin text_in[59]   :: I_BUF

# Pin location is not assigned
# Pin text_in[6]    :: I_BUF

# Pin location is not assigned
# Pin text_in[60]   :: I_BUF

# Pin location is not assigned
# Pin text_in[61]   :: I_BUF

# Pin location is not assigned
# Pin text_in[62]   :: I_BUF

# Pin location is not assigned
# Pin text_in[63]   :: I_BUF

# Pin location is not assigned
# Pin text_in[64]   :: I_BUF

# Pin location is not assigned
# Pin text_in[65]   :: I_BUF

# Pin location is not assigned
# Pin text_in[66]   :: I_BUF

# Pin location is not assigned
# Pin text_in[67]   :: I_BUF

# Pin location is not assigned
# Pin text_in[68]   :: I_BUF

# Pin location is not assigned
# Pin text_in[69]   :: I_BUF

# Pin location is not assigned
# Pin text_in[7]    :: I_BUF

# Pin location is not assigned
# Pin text_in[70]   :: I_BUF

# Pin location is not assigned
# Pin text_in[71]   :: I_BUF

# Pin location is not assigned
# Pin text_in[72]   :: I_BUF

# Pin location is not assigned
# Pin text_in[73]   :: I_BUF

# Pin location is not assigned
# Pin text_in[74]   :: I_BUF

# Pin location is not assigned
# Pin text_in[75]   :: I_BUF

# Pin location is not assigned
# Pin text_in[76]   :: I_BUF

# Pin location is not assigned
# Pin text_in[77]   :: I_BUF

# Pin location is not assigned
# Pin text_in[78]   :: I_BUF

# Pin location is not assigned
# Pin text_in[79]   :: I_BUF

# Pin location is not assigned
# Pin text_in[8]    :: I_BUF

# Pin location is not assigned
# Pin text_in[80]   :: I_BUF

# Pin location is not assigned
# Pin text_in[81]   :: I_BUF

# Pin location is not assigned
# Pin text_in[82]   :: I_BUF

# Pin location is not assigned
# Pin text_in[83]   :: I_BUF

# Pin location is not assigned
# Pin text_in[84]   :: I_BUF

# Pin location is not assigned
# Pin text_in[85]   :: I_BUF

# Pin location is not assigned
# Pin text_in[86]   :: I_BUF

# Pin location is not assigned
# Pin text_in[87]   :: I_BUF

# Pin location is not assigned
# Pin text_in[88]   :: I_BUF

# Pin location is not assigned
# Pin text_in[89]   :: I_BUF

# Pin location is not assigned
# Pin text_in[9]    :: I_BUF

# Pin location is not assigned
# Pin text_in[90]   :: I_BUF

# Pin location is not assigned
# Pin text_in[91]   :: I_BUF

# Pin location is not assigned
# Pin text_in[92]   :: I_BUF

# Pin location is not assigned
# Pin text_in[93]   :: I_BUF

# Pin location is not assigned
# Pin text_in[94]   :: I_BUF

# Pin location is not assigned
# Pin text_in[95]   :: I_BUF

# Pin location is not assigned
# Pin text_in[96]   :: I_BUF

# Pin location is not assigned
# Pin text_in[97]   :: I_BUF

# Pin location is not assigned
# Pin text_in[98]   :: I_BUF

# Pin location is not assigned
# Pin text_in[99]   :: I_BUF

# Pin location is not assigned
# Pin done          :: O_BUFT

# Pin location is not assigned
# Pin text_out[0]   :: O_BUFT

# Pin location is not assigned
# Pin text_out[1]   :: O_BUFT

# Pin location is not assigned
# Pin text_out[10]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[100] :: O_BUFT

# Pin location is not assigned
# Pin text_out[101] :: O_BUFT

# Pin location is not assigned
# Pin text_out[102] :: O_BUFT

# Pin location is not assigned
# Pin text_out[103] :: O_BUFT

# Pin location is not assigned
# Pin text_out[104] :: O_BUFT

# Pin location is not assigned
# Pin text_out[105] :: O_BUFT

# Pin location is not assigned
# Pin text_out[106] :: O_BUFT

# Pin location is not assigned
# Pin text_out[107] :: O_BUFT

# Pin location is not assigned
# Pin text_out[108] :: O_BUFT

# Pin location is not assigned
# Pin text_out[109] :: O_BUFT

# Pin location is not assigned
# Pin text_out[11]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[110] :: O_BUFT

# Pin location is not assigned
# Pin text_out[111] :: O_BUFT

# Pin location is not assigned
# Pin text_out[112] :: O_BUFT

# Pin location is not assigned
# Pin text_out[113] :: O_BUFT

# Pin location is not assigned
# Pin text_out[114] :: O_BUFT

# Pin location is not assigned
# Pin text_out[115] :: O_BUFT

# Pin location is not assigned
# Pin text_out[116] :: O_BUFT

# Pin location is not assigned
# Pin text_out[117] :: O_BUFT

# Pin location is not assigned
# Pin text_out[118] :: O_BUFT

# Pin location is not assigned
# Pin text_out[119] :: O_BUFT

# Pin location is not assigned
# Pin text_out[12]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[120] :: O_BUFT

# Pin location is not assigned
# Pin text_out[121] :: O_BUFT

# Pin location is not assigned
# Pin text_out[122] :: O_BUFT

# Pin location is not assigned
# Pin text_out[123] :: O_BUFT

# Pin location is not assigned
# Pin text_out[124] :: O_BUFT

# Pin location is not assigned
# Pin text_out[125] :: O_BUFT

# Pin location is not assigned
# Pin text_out[126] :: O_BUFT

# Pin location is not assigned
# Pin text_out[127] :: O_BUFT

# Pin location is not assigned
# Pin text_out[13]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[14]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[15]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[16]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[17]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[18]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[19]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[2]   :: O_BUFT

# Pin location is not assigned
# Pin text_out[20]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[21]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[22]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[23]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[24]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[25]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[26]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[27]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[28]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[29]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[3]   :: O_BUFT

# Pin location is not assigned
# Pin text_out[30]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[31]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[32]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[33]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[34]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[35]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[36]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[37]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[38]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[39]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[4]   :: O_BUFT

# Pin location is not assigned
# Pin text_out[40]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[41]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[42]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[43]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[44]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[45]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[46]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[47]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[48]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[49]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[5]   :: O_BUFT

# Pin location is not assigned
# Pin text_out[50]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[51]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[52]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[53]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[54]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[55]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[56]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[57]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[58]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[59]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[6]   :: O_BUFT

# Pin location is not assigned
# Pin text_out[60]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[61]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[62]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[63]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[64]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[65]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[66]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[67]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[68]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[69]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[7]   :: O_BUFT

# Pin location is not assigned
# Pin text_out[70]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[71]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[72]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[73]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[74]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[75]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[76]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[77]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[78]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[79]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[8]   :: O_BUFT

# Pin location is not assigned
# Pin text_out[80]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[81]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[82]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[83]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[84]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[85]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[86]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[87]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[88]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[89]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[9]   :: O_BUFT

# Pin location is not assigned
# Pin text_out[90]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[91]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[92]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[93]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[94]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[95]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[96]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[97]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[98]  :: O_BUFT

# Pin location is not assigned
# Pin text_out[99]  :: O_BUFT

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: clk
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[100]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[101]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[102]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[103]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[104]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[105]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[106]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[107]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[108]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[109]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[110]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[111]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[112]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[113]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[114]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[115]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[116]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[117]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[118]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[119]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[120]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[121]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[122]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[123]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[124]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[125]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[126]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[127]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[14]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[15]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[16]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[17]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[18]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[19]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[20]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[21]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[22]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[23]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[24]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[25]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[26]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[27]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[28]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[29]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[30]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[31]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[32]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[33]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[34]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[35]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[36]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[37]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[38]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[39]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[40]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[41]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[42]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[43]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[44]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[45]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[46]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[47]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[48]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[49]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[50]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[51]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[52]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[53]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[54]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[55]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[56]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[57]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[58]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[59]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[60]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[61]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[62]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[63]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[64]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[65]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[66]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[67]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[68]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[69]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[70]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[71]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[72]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[73]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[74]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[75]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[76]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[77]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[78]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[79]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[80]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[81]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[82]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[83]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[84]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[85]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[86]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[87]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[88]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[89]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[90]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[91]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[92]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[93]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[94]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[95]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[96]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[97]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[98]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: key[99]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: kld
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: ld
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: rst
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[100]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[101]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[102]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[103]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[104]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[105]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[106]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[107]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[108]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[109]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[110]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[111]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[112]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[113]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[114]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[115]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[116]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[117]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[118]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[119]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[120]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[121]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[122]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[123]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[124]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[125]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[126]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[127]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[14]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[15]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[16]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[17]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[18]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[19]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[20]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[21]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[22]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[23]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[24]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[25]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[26]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[27]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[28]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[29]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[30]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[31]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[32]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[33]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[34]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[35]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[36]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[37]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[38]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[39]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[40]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[41]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[42]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[43]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[44]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[45]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[46]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[47]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[48]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[49]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[50]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[51]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[52]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[53]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[54]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[55]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[56]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[57]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[58]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[59]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[60]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[61]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[62]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[63]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[64]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[65]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[66]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[67]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[68]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[69]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[70]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[71]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[72]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[73]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[74]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[75]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[76]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[77]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[78]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[79]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[80]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[81]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[82]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[83]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[84]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[85]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[86]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[87]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[88]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[89]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[90]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[91]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[92]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[93]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[94]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[95]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[96]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[97]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[98]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: text_in[99]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: done
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[0]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[1]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[10]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[100]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[101]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[102]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[103]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[104]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[105]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[106]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[107]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[108]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[109]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[11]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[110]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[111]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[112]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[113]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[114]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[115]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[116]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[117]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[118]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[119]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[12]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[120]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[121]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[122]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[123]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[124]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[125]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[126]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[127]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[13]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[14]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[15]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[16]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[17]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[18]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[19]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[2]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[20]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[21]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[22]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[23]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[24]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[25]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[26]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[27]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[28]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[29]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[3]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[30]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[31]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[32]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[33]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[34]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[35]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[36]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[37]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[38]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[39]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[4]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[40]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[41]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[42]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[43]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[44]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[45]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[46]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[47]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[48]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[49]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[5]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[50]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[51]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[52]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[53]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[54]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[55]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[56]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[57]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[58]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[59]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[6]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[60]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[61]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[62]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[63]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[64]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[65]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[66]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[67]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[68]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[69]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[7]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[70]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[71]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[72]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[73]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[74]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[75]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[76]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[77]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[78]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[79]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[8]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[80]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[81]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[82]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[83]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[84]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[85]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[86]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[87]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[88]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[89]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[9]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[90]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[91]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[92]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[93]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[94]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[95]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[96]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[97]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[98]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: text_out[99]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

#############
#
# Each gearbox core clock
#
#############
