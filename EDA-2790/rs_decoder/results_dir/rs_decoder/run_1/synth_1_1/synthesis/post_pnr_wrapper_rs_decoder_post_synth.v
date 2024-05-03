/* Generated by Yosys 0.38 (git sha1 24ed610c2, gcc 11.2.1 -fPIC -Os) */

module RS_dec_top(clk, reset, CE, input_byte, Out_byte, CEO, Valid_out);
  (* hdlname = "BM_lamda_unit clk" *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/BM_lamda.v:23.7-23.10|/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:105.12-160.2" *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:25.9-25.11" *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:29.10-29.13" *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:28.16-28.24" *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:30.10-30.19" *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:23.9-23.12" *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:26.15-26.25" *)
  (* hdlname = "out_stage_unit Out_byte" *)
  (* init = 8'h00 *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/out_stage.v:37.18-37.26|/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:418.13-436.2" *)
  (* hdlname = "out_stage_unit Valid_out" *)
  (* init = 1'h0 *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/out_stage.v:39.12-39.21|/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:418.13-436.2" *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:24.9-24.14" *)
  (* hdlname = "BM_lamda_unit clk" *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:105.12-160.2|/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/BM_lamda.v:23.7-23.10" *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:25.9-25.11" *)
  input CE;
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:29.10-29.13" *)
  output CEO;
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:28.16-28.24" *)
  output [7:0] Out_byte;
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:30.10-30.19" *)
  output Valid_out;
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:23.9-23.12" *)
  input clk;
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:26.15-26.25" *)
  input [7:0] input_byte;
  (* hdlname = "out_stage_unit Out_byte" *)
  (* init = 8'h00 *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:418.13-436.2|/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/out_stage.v:37.18-37.26" *)
  (* hdlname = "out_stage_unit Valid_out" *)
  (* init = 1'h0 *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:418.13-436.2|/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/out_stage.v:39.12-39.21" *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:24.9-24.14" *)
  input reset;
  wire \$auto$rs_design_edit.cc:572:execute$378334 ;
  wire \$auto$rs_design_edit.cc:572:execute$378335 ;
  wire \$auto$rs_design_edit.cc:572:execute$378336 ;
  wire \$auto$rs_design_edit.cc:572:execute$378337 ;
  wire \$auto$rs_design_edit.cc:572:execute$378338 ;
  wire \$auto$rs_design_edit.cc:572:execute$378339 ;
  wire \$auto$rs_design_edit.cc:572:execute$378340 ;
  wire \$auto$rs_design_edit.cc:572:execute$378341 ;
  wire \$auto$rs_design_edit.cc:572:execute$378342 ;
  wire \$auto$rs_design_edit.cc:572:execute$378343 ;
  wire \$auto$rs_design_edit.cc:572:execute$378344 ;
  (* hdlname = "BM_lamda_unit clk" *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/BM_lamda.v:23.7-23.10|/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:105.12-160.2" *)
  wire \$auto$rs_design_edit.cc:850:execute$378346.BM_lamda_unit.clk ;
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:25.9-25.11" *)
  wire \$auto$rs_design_edit.cc:850:execute$378346.CE ;
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:29.10-29.13" *)
  wire \$auto$rs_design_edit.cc:850:execute$378346.CEO ;
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:28.16-28.24" *)
  wire [7:0] \$auto$rs_design_edit.cc:850:execute$378346.Out_byte ;
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:30.10-30.19" *)
  wire \$auto$rs_design_edit.cc:850:execute$378346.Valid_out ;
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:23.9-23.12" *)
  wire \$auto$rs_design_edit.cc:850:execute$378346.clk ;
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:26.15-26.25" *)
  wire [7:0] \$auto$rs_design_edit.cc:850:execute$378346.input_byte ;
  (* hdlname = "out_stage_unit Out_byte" *)
  (* init = 8'h00 *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/out_stage.v:37.18-37.26|/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:418.13-436.2" *)
  wire [7:0] \$auto$rs_design_edit.cc:850:execute$378346.out_stage_unit.Out_byte ;
  (* hdlname = "out_stage_unit Valid_out" *)
  (* init = 1'h0 *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/out_stage.v:39.12-39.21|/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:418.13-436.2" *)
  wire \$auto$rs_design_edit.cc:850:execute$378346.out_stage_unit.Valid_out ;
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:24.9-24.14" *)
  wire \$auto$rs_design_edit.cc:850:execute$378346.reset ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378334 ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378335 ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378336 ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378337 ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378338 ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378339 ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378340 ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378341 ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378342 ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378343 ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378344 ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$CE ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$CEO ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$clk ;
  wire [7:0] \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$input_byte ;
  wire \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$reset ;
  wire \$iopadmap$CE ;
  wire \$iopadmap$CEO ;
  wire \$iopadmap$clk ;
  wire [7:0] \$iopadmap$input_byte ;
  wire \$iopadmap$reset ;
  (* hdlname = "BM_lamda_unit clk" *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:105.12-160.2|/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/BM_lamda.v:23.7-23.10" *)
  wire \BM_lamda_unit.clk ;
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:25.9-25.11" *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:25.9-25.11" *)
  wire CE;
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:29.10-29.13" *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:29.10-29.13" *)
  wire CEO;
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:28.16-28.24" *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:28.16-28.24" *)
  wire [7:0] Out_byte;
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:30.10-30.19" *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:30.10-30.19" *)
  wire Valid_out;
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:23.9-23.12" *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:23.9-23.12" *)
  wire clk;
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:26.15-26.25" *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:26.15-26.25" *)
  wire [7:0] input_byte;
  (* hdlname = "out_stage_unit Out_byte" *)
  (* init = 8'h00 *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:418.13-436.2|/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/out_stage.v:37.18-37.26" *)
  wire [7:0] \out_stage_unit.Out_byte ;
  (* hdlname = "out_stage_unit Valid_out" *)
  (* init = 1'h0 *)
  (* keep = 32'd1 *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:418.13-436.2|/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/out_stage.v:39.12-39.21" *)
  wire \out_stage_unit.Valid_out ;
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:24.9-24.14" *)
  (* src = "/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/rs_decoder/results_dir/.././rtl/rs_decoder_top.v:24.9-24.14" *)
  wire reset;
  fabric_RS_dec_top \$auto$rs_design_edit.cc:848:execute$378345  (
    .\out_stage_unit.Out_byte[7] (\out_stage_unit.Out_byte [7]),
    .\out_stage_unit.Out_byte[6] (\out_stage_unit.Out_byte [6]),
    .\out_stage_unit.Out_byte[5] (\out_stage_unit.Out_byte [5]),
    .\out_stage_unit.Out_byte[4] (\out_stage_unit.Out_byte [4]),
    .\out_stage_unit.Out_byte[3] (\out_stage_unit.Out_byte [3]),
    .\out_stage_unit.Out_byte[2] (\out_stage_unit.Out_byte [2]),
    .\out_stage_unit.Out_byte[1] (\out_stage_unit.Out_byte [1]),
    .\out_stage_unit.Out_byte[0] (\out_stage_unit.Out_byte [0]),
    .\$iopadmap$input_byte[6] (\$iopadmap$input_byte [6]),
    .\$iopadmap$input_byte[5] (\$iopadmap$input_byte [5]),
    .\$iopadmap$input_byte[4] (\$iopadmap$input_byte [4]),
    .\$iopadmap$input_byte[3] (\$iopadmap$input_byte [3]),
    .\$iopadmap$input_byte[2] (\$iopadmap$input_byte [2]),
    .\$iopadmap$input_byte[1] (\$iopadmap$input_byte [1]),
    .\$iopadmap$input_byte[0] (\$iopadmap$input_byte [0]),
    .\$auto$rs_design_edit.cc:572:execute$378335 (\$auto$rs_design_edit.cc:572:execute$378335 ),
    .\$auto$rs_design_edit.cc:572:execute$378336 (\$auto$rs_design_edit.cc:572:execute$378336 ),
    .\$auto$rs_design_edit.cc:572:execute$378337 (\$auto$rs_design_edit.cc:572:execute$378337 ),
    .\$auto$rs_design_edit.cc:572:execute$378338 (\$auto$rs_design_edit.cc:572:execute$378338 ),
    .\$auto$rs_design_edit.cc:572:execute$378339 (\$auto$rs_design_edit.cc:572:execute$378339 ),
    .\$auto$rs_design_edit.cc:572:execute$378340 (\$auto$rs_design_edit.cc:572:execute$378340 ),
    .\$auto$rs_design_edit.cc:572:execute$378341 (\$auto$rs_design_edit.cc:572:execute$378341 ),
    .\$auto$rs_design_edit.cc:572:execute$378342 (\$auto$rs_design_edit.cc:572:execute$378342 ),
    .\$auto$rs_design_edit.cc:572:execute$378343 (\$auto$rs_design_edit.cc:572:execute$378343 ),
    .\$auto$rs_design_edit.cc:572:execute$378344 (\$auto$rs_design_edit.cc:572:execute$378344 ),
    .\$iopadmap$CE (\$iopadmap$CE ),
    .\$iopadmap$CEO (\$iopadmap$CEO ),
    .\$auto$rs_design_edit.cc:572:execute$378334 (\$auto$rs_design_edit.cc:572:execute$378334 ),
    .\$iopadmap$reset (\$iopadmap$reset ),
    .\BM_lamda_unit.clk (\BM_lamda_unit.clk ),
    .\$iopadmap$input_byte[7] (\$iopadmap$input_byte [7]),
    .\out_stage_unit.Valid_out (\out_stage_unit.Valid_out )
  );
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:14.13-14.45" *)
  CLK_BUF \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$clkbufmap.cc:265:execute$374999  (
    .I(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$clk ),
    .O(\$auto$rs_design_edit.cc:850:execute$378346.BM_lamda_unit.clk )
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:29.41-29.81" *)
  I_BUF #(
    .WEAK_KEEPER("NONE")
  ) \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.CE  (
    .EN(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378334 ),
    .I(\$auto$rs_design_edit.cc:850:execute$378346.CE ),
    .O(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$CE )
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:41.13-41.44" *)
  O_BUF \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.CEO  (
    .I(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$CEO ),
    .O(\$auto$rs_design_edit.cc:850:execute$378346.CEO )
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:41.13-41.44" *)
  O_BUF \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.Out_byte  (
    .I(\$auto$rs_design_edit.cc:850:execute$378346.out_stage_unit.Out_byte [0]),
    .O(\$auto$rs_design_edit.cc:850:execute$378346.Out_byte [0])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:41.13-41.44" *)
  O_BUF \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.Out_byte_1  (
    .I(\$auto$rs_design_edit.cc:850:execute$378346.out_stage_unit.Out_byte [1]),
    .O(\$auto$rs_design_edit.cc:850:execute$378346.Out_byte [1])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:41.13-41.44" *)
  O_BUF \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.Out_byte_2  (
    .I(\$auto$rs_design_edit.cc:850:execute$378346.out_stage_unit.Out_byte [2]),
    .O(\$auto$rs_design_edit.cc:850:execute$378346.Out_byte [2])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:41.13-41.44" *)
  O_BUF \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.Out_byte_3  (
    .I(\$auto$rs_design_edit.cc:850:execute$378346.out_stage_unit.Out_byte [3]),
    .O(\$auto$rs_design_edit.cc:850:execute$378346.Out_byte [3])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:41.13-41.44" *)
  O_BUF \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.Out_byte_4  (
    .I(\$auto$rs_design_edit.cc:850:execute$378346.out_stage_unit.Out_byte [4]),
    .O(\$auto$rs_design_edit.cc:850:execute$378346.Out_byte [4])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:41.13-41.44" *)
  O_BUF \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.Out_byte_5  (
    .I(\$auto$rs_design_edit.cc:850:execute$378346.out_stage_unit.Out_byte [5]),
    .O(\$auto$rs_design_edit.cc:850:execute$378346.Out_byte [5])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:41.13-41.44" *)
  O_BUF \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.Out_byte_6  (
    .I(\$auto$rs_design_edit.cc:850:execute$378346.out_stage_unit.Out_byte [6]),
    .O(\$auto$rs_design_edit.cc:850:execute$378346.Out_byte [6])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:41.13-41.44" *)
  O_BUF \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.Out_byte_7  (
    .I(\$auto$rs_design_edit.cc:850:execute$378346.out_stage_unit.Out_byte [7]),
    .O(\$auto$rs_design_edit.cc:850:execute$378346.Out_byte [7])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:41.13-41.44" *)
  O_BUF \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.Valid_out  (
    .I(\$auto$rs_design_edit.cc:850:execute$378346.out_stage_unit.Valid_out ),
    .O(\$auto$rs_design_edit.cc:850:execute$378346.Valid_out )
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:29.41-29.81" *)
  I_BUF #(
    .WEAK_KEEPER("NONE")
  ) \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.clk  (
    .EN(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378335 ),
    .I(\$auto$rs_design_edit.cc:850:execute$378346.clk ),
    .O(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$clk )
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:29.41-29.81" *)
  I_BUF #(
    .WEAK_KEEPER("NONE")
  ) \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.input_byte  (
    .EN(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378336 ),
    .I(\$auto$rs_design_edit.cc:850:execute$378346.input_byte [0]),
    .O(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$input_byte [0])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:29.41-29.81" *)
  I_BUF #(
    .WEAK_KEEPER("NONE")
  ) \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.input_byte_1  (
    .EN(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378337 ),
    .I(\$auto$rs_design_edit.cc:850:execute$378346.input_byte [1]),
    .O(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$input_byte [1])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:29.41-29.81" *)
  I_BUF #(
    .WEAK_KEEPER("NONE")
  ) \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.input_byte_2  (
    .EN(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378338 ),
    .I(\$auto$rs_design_edit.cc:850:execute$378346.input_byte [2]),
    .O(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$input_byte [2])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:29.41-29.81" *)
  I_BUF #(
    .WEAK_KEEPER("NONE")
  ) \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.input_byte_3  (
    .EN(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378339 ),
    .I(\$auto$rs_design_edit.cc:850:execute$378346.input_byte [3]),
    .O(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$input_byte [3])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:29.41-29.81" *)
  I_BUF #(
    .WEAK_KEEPER("NONE")
  ) \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.input_byte_4  (
    .EN(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378340 ),
    .I(\$auto$rs_design_edit.cc:850:execute$378346.input_byte [4]),
    .O(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$input_byte [4])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:29.41-29.81" *)
  I_BUF #(
    .WEAK_KEEPER("NONE")
  ) \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.input_byte_5  (
    .EN(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378341 ),
    .I(\$auto$rs_design_edit.cc:850:execute$378346.input_byte [5]),
    .O(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$input_byte [5])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:29.41-29.81" *)
  I_BUF #(
    .WEAK_KEEPER("NONE")
  ) \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.input_byte_6  (
    .EN(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378342 ),
    .I(\$auto$rs_design_edit.cc:850:execute$378346.input_byte [6]),
    .O(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$input_byte [6])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:29.41-29.81" *)
  I_BUF #(
    .WEAK_KEEPER("NONE")
  ) \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.input_byte_7  (
    .EN(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378343 ),
    .I(\$auto$rs_design_edit.cc:850:execute$378346.input_byte [7]),
    .O(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$input_byte [7])
  );
  (* keep = 32'd1 *)
  (* module_not_derived = 32'd1 *)
  (* src = "/nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/io_cell_final_map.v:29.41-29.81" *)
  I_BUF #(
    .WEAK_KEEPER("NONE")
  ) \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$RS_dec_top.reset  (
    .EN(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378344 ),
    .I(\$auto$rs_design_edit.cc:850:execute$378346.reset ),
    .O(\$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$reset )
  );
  assign \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378344  = \$auto$rs_design_edit.cc:572:execute$378344 ;
  assign \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378343  = \$auto$rs_design_edit.cc:572:execute$378343 ;
  assign \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378342  = \$auto$rs_design_edit.cc:572:execute$378342 ;
  assign \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378341  = \$auto$rs_design_edit.cc:572:execute$378341 ;
  assign \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378340  = \$auto$rs_design_edit.cc:572:execute$378340 ;
  assign \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378339  = \$auto$rs_design_edit.cc:572:execute$378339 ;
  assign \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378338  = \$auto$rs_design_edit.cc:572:execute$378338 ;
  assign \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378337  = \$auto$rs_design_edit.cc:572:execute$378337 ;
  assign \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378336  = \$auto$rs_design_edit.cc:572:execute$378336 ;
  assign \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378335  = \$auto$rs_design_edit.cc:572:execute$378335 ;
  assign \$flatten$auto$rs_design_edit.cc:850:execute$378346.$auto$rs_design_edit.cc:572:execute$378334  = \$auto$rs_design_edit.cc:572:execute$378334 ;
  assign \$iopadmap$CE  = \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$CE ;
  assign \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$CEO  = \$iopadmap$CEO ;
  assign \$iopadmap$input_byte  = \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$input_byte ;
  assign \$iopadmap$reset  = \$flatten$auto$rs_design_edit.cc:850:execute$378346.$iopadmap$reset ;
  assign \BM_lamda_unit.clk  = \$auto$rs_design_edit.cc:850:execute$378346.BM_lamda_unit.clk ;
  assign \$auto$rs_design_edit.cc:850:execute$378346.CE  = CE;
  assign CEO = \$auto$rs_design_edit.cc:850:execute$378346.CEO ;
  assign Out_byte = \$auto$rs_design_edit.cc:850:execute$378346.Out_byte ;
  assign Valid_out = \$auto$rs_design_edit.cc:850:execute$378346.Valid_out ;
  assign \$auto$rs_design_edit.cc:850:execute$378346.clk  = clk;
  assign \$auto$rs_design_edit.cc:850:execute$378346.input_byte  = input_byte;
  assign \$auto$rs_design_edit.cc:850:execute$378346.out_stage_unit.Out_byte  = \out_stage_unit.Out_byte ;
  assign \$auto$rs_design_edit.cc:850:execute$378346.out_stage_unit.Valid_out  = \out_stage_unit.Valid_out ;
  assign \$auto$rs_design_edit.cc:850:execute$378346.reset  = reset;
endmodule