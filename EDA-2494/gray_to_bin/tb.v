`include "clb_defines.v"
`include "/nfs_eda_sw/softwares/Raptor/instl_dir/latest/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/LUT2.v"
`include "/nfs_eda_sw/softwares/Raptor/instl_dir/latest/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/LUT3.v"
`include "/nfs_eda_sw/softwares/Raptor/instl_dir/latest/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/LUT4.v"
`include "/nfs_eda_sw/softwares/Raptor/instl_dir/latest/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/LUT5.v"
`include "/nfs_eda_sw/softwares/Raptor/instl_dir/latest/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/LUT6.v"
`include "../gray_to_bin/run_1/synth_1_1/synthesis/gray_to_bin_post_synth.v"

module gray_to_bin_tb;

  reg [`DATA_WIDTH - 1:0] gray;
  wire [`DATA_WIDTH - 1:0] binary;

  reg  [`DATA_WIDTH - 1:0] expected_val;

  reg [31:0] error=0;

  gray_to_bin  gray_to_bin_inst (
    .gray(gray),
    .binary(binary)
  );

// always #5  clk = ! clk ;

initial begin
for(int test_cycle = 0; test_cycle < 200; test_cycle+=1)begin
    // gray = {$urandom,$urandom,$urandom,$urandom,$urandom,$urandom,$urandom}[`DATA_WIDTH-1:0];
  gray = $random;  
  for(int i = 0; i < `DATA_WIDTH; i=i+1)begin
        expected_val[i] = ^(gray >> i);
    end
    #10;
    if(binary !== expected_val)begin
        $display("Error: Output %h but expected %h",binary,expected_val);
        error+=1;
    end
    else begin
      $display("Passed: Output %h but expected %h",binary,expected_val);
    end
    end
end

initial begin
  $dumpfile("wave.vcd");
  $dumpvars;
end
endmodule 
