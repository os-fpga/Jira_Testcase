#include "obj_dir/Vco_sim_sdp_nsplit_ram_1024x36_R4W4.h"
int sc_main(int argc, char** argv){
    Verilated::commandArgs(argc,argv);
    Verilated::traceEverOn(true);
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4* top;
    top = new Vco_sim_sdp_nsplit_ram_1024x36_R4W4("top");
    sc_start(400, SC_NS);
    return 0;
}
