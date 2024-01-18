// import uvm_pkg::*;
// `include "uvm_macros.svh"
`timescale 1ns/1ps
// `define RTL
`define DATA_WIDTH 32
`define ADDR_WIDTH 32
`define CNTRL_REG_ADDR 1
`define SRC_REG_ADDR 2
`define DEST_REG_ADDR 3

`ifdef RTL
  `include "rtl/ahb2ram.sv"
`endif

`ifdef SYNTH
  `include "tb/simlib.v"
  `include "tb/dsp_sim.v"
  `include "tb/cells_sim.v"
  `include "ahb2ram/ahb2ram_post_synth.v"

`endif

`ifdef SYNTHESIS
  `include "tb/simlib.v"
  `include "tb/dsp_sim.v"
  `include "tb/cells_sim.v"
  `include "tb/primitives.v"
  `include "ahb2ram/ahb2ram_post_synthesis.v"
`endif
module ahb2ram_test;
    initial begin 
		// if($test$plusargs("ahb2ram_test")) begin 
			ahb2ram_test(); 
		// end
	end

// ========== Variables declaration ============ //
  string 			            design_name        = "ahb2ram";
  parameter               HADDR_SIZE         = 32;
  parameter               HDATA_SIZE         = 32;
  parameter               REGISTERED_OUTPUT  = "NO";
  bit   [`ADDR_WIDTH-1:0] HADDR              = 0;
  bit   [`DATA_WIDTH-1:0] HWDATA             = 0;
  logic [`DATA_WIDTH-1:0] HRDATA;
  bit   [2:0]             HSIZE              = 0;
  bit   [2:0]             HBURST             = 0;
  bit   [1:0]             HTRANS             = 0;
  bit   [3:0]             HPROT              = 0;
  bit                     HWRITE             = 0;
  bit                     HSEL               = 0;
  bit                     HREADY             = 0;
  logic                   HRESP;
  logic                   HREADYOUT;
  bit                     HCLK;
  bit                     HRESETn = 0; 
  integer                 error   = 0,i;
  logic [31:0]            data_out;
  reg   [9:0]             addr;
  reg   [31:0]            data_ran;

`ifndef SYNTHESIS
  ahb2ram
  #(
    32,32,"NO"
  )
  ahb_slave_dut (
    .HCLK (HCLK ),
    .HRESETn (HRESETn ),
    .HADDR (HADDR ),
    .HWRITE (HWRITE ),
    .HSIZE (HSIZE ),
    .HBURST (HBURST ),
    .HTRANS (HTRANS ),
    .HSEL (HSEL ),
    // .ahb_slverr (ahb_slverr ),
    .HWDATA (HWDATA ),
    .HRDATA (HRDATA ),
    .HRESP (HRESP ),
    .HREADYOUT  ( HREADYOUT),
    .HPROT(HPROT),
    .HREADY(1'b1)
  );
  `endif

  `ifdef SYNTHESIS
  ahb2ram
  #(
    32,32,"NO"
  )
  ahb_slave_dut (  
    HRESETn,
    HCLK,
    HSEL,
    HWRITE,
    HREADY,
    HADDR[9],
    HADDR[8],
    HADDR[7],
    HADDR[6],
    HADDR[5],
    HADDR[4],
    HADDR[3],
    HADDR[2],
    HWDATA[31],
    HWDATA[30],
    HWDATA[29],
    HWDATA[28],
    HWDATA[27],
    HWDATA[26],
    HWDATA[25],
    HWDATA[24],
    HWDATA[23],
    HWDATA[22],
    HWDATA[21],
    HWDATA[20],
    HWDATA[19],
    HWDATA[18],
    HWDATA[17],
    HWDATA[16],
    HWDATA[15],
    HWDATA[14],
    HWDATA[13],
    HWDATA[12],
    HWDATA[11],
    HWDATA[10],
    HWDATA[9],
    HWDATA[8],
    HWDATA[7],
    HWDATA[6],
    HWDATA[5],
    HWDATA[4],
    HWDATA[3],
    HWDATA[2],
    HWDATA[1],
    HWDATA[0],
    HTRANS[1],
    HRDATA[31],
    HRDATA[30],
    HRDATA[29],
    HRDATA[28],
    HRDATA[27],
    HRDATA[26],
    HRDATA[25],
    HRDATA[24],
    HRDATA[23],
    HRDATA[22],
    HRDATA[21],
    HRDATA[20],
    HRDATA[19],
    HRDATA[18],
    HRDATA[17],
    HRDATA[16],
    HRDATA[15],
    HRDATA[14],
    HRDATA[13],
    HRDATA[12],
    HRDATA[11],
    HRDATA[10],
    HRDATA[9],
    HRDATA[8],
    HRDATA[7],
    HRDATA[6],
    HRDATA[5],
    HRDATA[4],
    HRDATA[3],
    HRDATA[2],
    HRDATA[1],
    HRDATA[0],
    HREADYOUT,
    HRESP
    );
`endif

  initial begin
    HRESETn = 1'b0;
    HCLK    = 0;
    #10;
    HRESETn = 1'b1;
  end
  always  #(2.5)     HCLK = !HCLK;

    task ahb2ram_test();
      $display("In task");
    // `ifndef RTL
    //   // ========== Include the a2f/f2a pins mapped to design ============ //
    //   `include "ahb2ram/PinMapping.v"
    //     // ========== Load the Bitstream ============ //	
    //   `TB_TOP.load_bitstream(design_name);       
    // `endif
    	// ========== Stimulus Drive to Mapped Design on Fabric ============ //
        //`uvm_info(,"-----------RESET ASSERT-----------", UVM_NONE)
        //$display("design_name:%0s -----------RESET ASSERT-----------, ",design_name);
        HRESETn = 0;
        repeat(5) @(posedge HCLK);
        // #5;
        HRESETn = 1;
        //`uvm_info(design_name,"-----------RESET DE-ASSERT-----------**", UVM_NONE)
        $display("design_name:%0s -----------RESET DE-ASSERT-----------, ",design_name);
        //`uvm_info(design_name,"-----------START :: random write & read-----------", UVM_NONE)
        $display("design_name:%0s -----------START :: random write & read-----------, ",design_name);
        repeat(10)
        begin
        addr = $urandom_range(0,1);
        data_ran = $urandom_range(1,10);
        @(posedge HCLK);
        write(addr,data_ran);
        read(addr,data_out);
        if (data_out !== data_ran) begin
            error+=1;
            //`uvm_error(design_name, $sformatf("MISMATCH :: EXPECTED ==> %d but ACTUAL ==> %d",data_ran,data_out))
            $display("MISMATCH :: EXPECTED ==> %d but ACTUAL ==> %d",data_ran,data_out);
        end
        else
            //`uvm_info(design_name, $sformatf("MATCH :: EXPECTED ==> %d but ACTUAL ==> %d",data_ran,data_out), UVM_NONE)
            $display("MISMATCH :: EXPECTED ==> %d but ACTUAL ==> %d",data_ran,data_out);
            
        end
        //`uvm_info(design_name, "-----------DONE :: random write & read-----------**", UVM_NONE)
        $display("-----------START :: random write & read-----------");
        //`uvm_info(design_name, "-----------START :: Four-beat incrementing burst-------------", UVM_NONE)
        $display("----------------------START :: Four-beat incrementing burst-----------");
        //will be extend further

        
        repeat(50)@(posedge HCLK);
        test_status(error);
        #100 $finish;
    endtask
  task write(input bit[31:0] addr, input logic[31:0] data);
  
  	@(posedge HCLK);
  	HADDR 	= addr;			
  	HWRITE 	= '1;	
    HSEL   = 1;					
  	HSIZE	= 3'b010;	
  	HTRANS	= 2'b10;					
  	HBURST 	= '0;	
    @(posedge HCLK);			
  	// wait (HREADYOUT == 1);
  	HWDATA	= data;
  	// @(posedge HCLK);

  endtask	

  task read(input bit [31:0] addr, output logic [32-1:0] data);
  	@(posedge HCLK);
  	HADDR 	= addr;							
  	HWRITE 	= '0;						
  	HSIZE	= 3'b010;								
  	HTRANS	= 2'b10;
  	HBURST 	= '0;									
  
  	@(posedge HCLK);
  	@(posedge HCLK);
  	@(posedge HCLK);
    // wait (HREADYOUT == 0);
  	data = HRDATA;  		
  endtask

  task test_status(input logic [31:0] error);
    begin
      if(error === 32'h0)
        begin
          $display("----------------------------------------------");
          $display("                 TEST_PASSED                  ");
          $display("----------------------------------------------");
          $display(""); 
          $display(""); 
          $display("                     $$$$$$$$$$$              ");
          $display("                    $$          $$            ");
          $display("       $$$        $$              $$          ");
          $display("      $   $      $$                $$         ");
          $display("      $    $    $$    $$      $$    $$        ");
          $display("      $    $   $$    $  $    $  $    $$       ");
          $display("      $    $  $$     $  $    $  $     $$      ");
          $display("     $$    $                           $$     ");
          $display("     $    $$$$$$                       $$     ");
          $display("    $$         $ $$$$$$$$$$$$$$$$$$$$  $$     ");
          $display("   $$    $$$$$$$  $$   $  $  $    $$   $$     ");
          $display("   $            $  $$  $  $  $   $$   $$      ");
          $display("   $     $$$$$$$    $$ $  $  $  $$   $$       ");
          $display("   $            $    $$$  $  $ $$   $$        ");
          $display("   $     $$$$$$$ $$   $$$$$$$$$$   $$         ");
          $display("   $$          $   $$             $$          ");
          $display("     $$$$$$$$$$      $$         $$            ");
          $display("                       $$$$$$$$$              ");
          $display("");
          $display("");	
        end
        else   
        begin
          $display("----------------------------------------------");
          $display("                 TEST_FAILED                  ");
          $display("----------------------------------------------");
        end
    end
    endtask
    initial begin
    $dumpfile("out/wave.vcd");
    $dumpvars;
    end
endmodule