create_design dma_wrapper_top
target_device GEMINI
set_device_size 78x66
add_include_path ./ ./inc/

add_design_file -V_2001 ./inc/wb_dma_defines.vh \
	./dma_wrapper_top.v \
	./wb_dma_ch_arb.v \
	./wb_dma_ch_pri_enc.v \
	./wb_dma_ch_rf.v \
	./wb_dma_ch_sel.v \
	./wb_dma_de.v \
	./wb_dma_inc30r.v \
	./wb_dma_pri_enc_sub.v \
	./wb_dma_rf.v \
	./wb_dma_top.v \
	./wb_dma_wb_if.v \
	./wb_dma_wb_mast.v \
	./wb_dma_wb_slv.v 

set_top_module dma_wrapper_top
synthesize
