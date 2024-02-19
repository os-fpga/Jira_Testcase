
tdp18:
	iverilog -o tdp18 ./TDP_RAM18KX2/top_mapping.v ./TDP_RAM18KX2/top_model.v ./TDP_RAM18KX2/TDP_RAM18KX2_to_RS_TDP36K.v ./TDP_RAM18KX2/rs_tdp36k_post_pnr_mapping.v ./TDP_RAM18KX2/TDP_RAM18KX2_org.v ./TDP_RAM18KX2/tb.v -g2012
	vvp tdp18
tdp36:
	iverilog -o tdp36 ./TDP_RAM36K/top_mapping.v ./TDP_RAM36K/top_model.v ./TDP_RAM36K/TDP_RAM36K_org.v ./TDP_RAM36K/TDP_RAM36K_to_RS_TDP36K.v ./TDP_RAM36K/rs_tdp36k_post_pnr_mapping.v ./TDP_RAM36K/tb.v -g2012
	vvp tdp36
clean:
	@rm -rf tdp18 tdp18.vcd tdp36 tdp36.vcd
