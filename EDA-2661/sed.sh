
sed -i 's|$auto$clkbufmap.cc:298:execute$1061|clk0|g' $(find ./up5bit_counter_dual_clock -type f -name "fabric_up5bit_counter_dual_clock_top_formal_verification.v")
sed -i 's|$auto$clkbufmap.cc:298:execute$1058|clk1|g' $(find ./up5bit_counter_dual_clock -type f -name "fabric_up5bit_counter_dual_clock_top_formal_verification.v")
sed -i "s|clk_fm\[0\] = clock0\[0\]|clk_fm\[0\] = 1'b0|" $(find . -type f -name "fabric_up5bit_counter_dual_clock_top_formal_verification.v")

sed -i "s|clk_fm\[14\] = 1'b0|clk_fm\[14\] = clk0|" $(find . -type f -name "fabric_up5bit_counter_dual_clock_top_formal_verification.v")
sed -i "s|clk_fm\[15\] = 1'b0|clk_fm\[15\] = clk1|" $(find . -type f -name "fabric_up5bit_counter_dual_clock_top_formal_verification.v")

sed -i "s|global_resetn_fm\[0\] = 1'b0|global_resetn_fm\[0\] = 1'b1|g" $(find . -type f -name "fabric_up5bit_counter_dual_clock_top_formal_verification.v")
