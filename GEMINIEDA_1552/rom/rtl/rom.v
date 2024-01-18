module rom (clk, address, data);
input clk;
// input we;
input [8:0] address;
// input [7:0] di;
output [7:0] data;

// (
// input clk, 
// input [8:0] address,
// output reg [7:0] data
// );

reg [7:0] data;
reg [7:0] mem [1023:0]; 

initial $readmemb("/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/bitstream_simulation_new/ArchBench/Testcases/rom/rtl/memory_file.mem", mem); 

always @(posedge clk) begin
   data <= mem[address];
end 

// Alternate case

// always @(posedge clk)
//     begin
//         if (we)
//         begin
//             mem[address] <= di;
//             data <= di;
//         end
//         else 
//          data <= mem[address];
//     end
endmodule
