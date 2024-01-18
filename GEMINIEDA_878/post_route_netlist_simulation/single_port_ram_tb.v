// `include "/nfs_eda_sw/softwares/Raptor/instl_dir/latest/share/raptor/sim_models/rapidsilicon/genesis2/sram1024x18.v"
// `include "/nfs_eda_sw/softwares/Raptor/instl_dir/latest/share/raptor/sim_models/rapidsilicon/genesis2/primitives.v"
// `include "/nfs_eda_sw/softwares/Raptor/instl_dir/latest/share/raptor/sim_models/rapidsilicon/genesis2/TDP18K_FIFO.v"
// `include "/nfs_eda_sw/softwares/Raptor/instl_dir/latest/share/raptor/sim_models/rapidsilicon/genesis2/ufifo_ctl.v"
// `include "/nfs_eda_sw/softwares/Raptor/instl_dir/latest/share/raptor/sim_models/rapidsilicon/genesis2/brams_sim.v"
// `include "single_port_ram_mem_post_synthesis.v"

`include "sram1024x18.v"
`include "primitives.v"
`include "TDP18K_FIFO.v"
`include "ufifo_ctl.v"
`include "brams_sim.v"
`include "single_port_ram_mem_post_synthesis.v"

module single_port_ram_tb #(parameter DATA_WIDTH=8, parameter ADDR_WIDTH=6);
    reg clk;
    reg we;
    reg [(ADDR_WIDTH-1):0] addr;
    reg [(DATA_WIDTH-1):0] data;
    wire [(DATA_WIDTH-1):0] q;

   single_port_ram_mem netlist(we,clk,addr[5],addr[4],addr[3],addr[2],addr[1],addr[0],data[7],data[6],data[5],data[4],data[3],data[2],data[1],data[0],q[7],q[6],q[5],q[4],q[3],q[2],q[1],q[0]);

    always #1 clk = ~clk;

    initial begin
    	{clk, we, addr ,data} = 0;

    	repeat (1) @ (negedge clk);

    	for (integer i=0; i<2**ADDR_WIDTH; i=i+1)begin
    	    addr <= i; we <=1; data<= $random;
    	    repeat (1) @ (negedge clk);
    	end

    	for (integer i=0; i<2**ADDR_WIDTH; i=i+1)begin
    	    addr <= i; we <=0;
    	    repeat (1) @ (negedge clk);
		end

    	repeat (10) @(negedge clk); $finish;
    end

initial begin
   $dumpfile("post_route_netlist_tb.vcd");
   $dumpvars;
end
endmodule