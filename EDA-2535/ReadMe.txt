1. Run: raptor --batch --script top.tcl
2. Two folder will be generated: addr0 and addr1
3. Both design:
    -- use exact same design (same verilog file)
    -- the only different is the initial value used in BRAM
        -- check dedicated folder memory.mem
4. Compare _post_synth.v or eblif for both cases
    -- addr1 INIT value does not seems to be correct