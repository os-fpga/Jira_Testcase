 
#!/bin/bash

# Run script1.sh
cd accum_output_shifted
source raptor_run.sh 
cd ../accum_output_shifted_rounded_inst

# Run script2.sh
source raptor_run.sh
cd ../signed_accum_output_shifted

# Run script3.sh
source raptor_run.sh 
cd ../signed_accum_output_shifted_rounded_saturated_overflow_inst

# Run script4.sh
source raptor_run.sh 
cd ../signed_accum_output_shifted_rounded_saturated_overflow_underflow_inst

# Run script5.sh
source raptor_run.sh 
cd ../signed_accum_output_shifted_saturated_overflow_underflow_inst

# Run script6.sh
source raptor_run.sh 
cd ../signed_right_shift_a_input

# Run script7.sh
source raptor_run.sh 
cd ..