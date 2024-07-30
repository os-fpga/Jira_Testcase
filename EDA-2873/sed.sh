sed -i "s|// 	wire \[0:0\] bcd\[2\]_gfpga;|    integer mismatch=0;|" $(find . -type f -name "fabric_bin2bcd_formal_random_top_tb.v")
sed -i "s|global_resetn_fm\[0\] = 1'b0|global_resetn_fm\[0\] = 1'b1|" $(find . -type f -name "fabric_bin2bcd_top_formal_verification.v")
