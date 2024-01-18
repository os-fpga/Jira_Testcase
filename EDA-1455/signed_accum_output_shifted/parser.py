#Owner: Abdul Hameed Akram
#Dated: 30/01/2023
#Description: This code reads in a list of log files and a mapping of keywords for each file. 
#             It then processes each file and extracts information based on the keywords provided 
#             in the keywords.json. The extracted information is stored in a dictionary and 
#             written to a json file called "parsed_data.json".


# Importing the json module
import json
import sys

# Defining the function parse_log_files() that takes in a list of log files and a log_line_keys_map
def parse_log_files(file, log_line_keys_map):
    # Initializing an empty dictionary to store the parsed data
    data = {}
    with open(file, 'r') as f:
        # Adding the current file name as a key to the data dictionary and initializing its value as another dictionary
        data = {}
        # Reading all the lines of the log file into a list
        lines = f.readlines()

        # Looping through each key and keyword in the log_line_keys_map for this log file
        for log_line_key, log_line_keyword in log_line_keys_map.items():
            # Initializing the value for this key as N/A or 0 depending on the key
            data[log_line_key] = None

        run_time_raptor = 0
        temp_string = ""
        previous_error_bfr_sim = False # flag to keep track of previous errors
        for line in lines:
            # Looping through each key and keyword in the log_line_keys_map for this log file
            for log_line_key, log_line_keyword in log_line_keys_map.items():
                # Checking if the keyword is in the current line
                if log_line_keyword in line:
                    # Checking the file name and updating the value of the log line key accordingly
                    if log_line_key == 'total_runtime':
                        run_time_raptor=int(line.split(log_line_keyword)[1].strip().split('ms.')[0])+run_time_raptor
                        data[log_line_key] = run_time_raptor
                    elif log_line_key == 'strategy':
                        data[log_line_key] = line.split(log_line_keyword)[1].strip() 
                    elif log_line_key == 'reg_id':
                        data[log_line_key] = line.split(log_line_keyword)[1].strip()
                    elif log_line_key == 'device':
                        data[log_line_key] = line.split(log_line_keyword)[1].strip() 
                    elif log_line_key == 'target device':
                        data[log_line_key] = line.split(log_line_keyword)[1].strip().split('INFO:')[0]
                    elif log_line_key == 'version':
                        data[log_line_key] = line.split(log_line_keyword)[1].strip() 
                    elif log_line_key == 'git_hash':
                        data[log_line_key] = line.split(log_line_keyword)[1].strip() 
                    elif log_line_key == 'built':
                        data[log_line_key] = line.split(log_line_keyword)[1].strip() 
                    elif log_line_key == 'built_type':
                        data[log_line_key] = line.split(log_line_keyword)[1].strip() 
                    elif log_line_key == 'error_msg':
                        temp_string = line.split(log_line_keyword)[1].strip() + " " + temp_string
                        data[log_line_key] = temp_string
                if log_line_key == 'status':
                            #the code splits the log line keyword by commas and loops through the resulting list of keywords.
                            status_keywords = log_line_keyword.split(',')
                            for status_keyword in status_keywords:
                                if status_keyword in line:
                                    if status_keyword == "ERROR: ":
                                        if "SIM" in line:
                                            if previous_error_bfr_sim: # check if any previous error occurred before SIM
                                                data[log_line_key] = 'Fail'
                                            else:
                                                data[log_line_key] = 'Pass'
                                        else:
                                            previous_error_bfr_sim = True # set flag if any error message appears
                                            data[log_line_key] = 'Fail'
                                    else:
                                        data[log_line_key] = 'Pass'
                if log_line_key == 'post_synth_sim_status':
                            #the code splits the log line keyword by commas and loops through the resulting list of keywords.
                            sim_status_keywords = log_line_keyword.split(',')
                            for sim_status_keyword in sim_status_keywords:
                                if sim_status_keyword in line:
                                    if sim_status_keyword == "Simulation Failed":
                                        data[log_line_key] = 'Fail'
                                    elif sim_status_keyword == "Error-":
                                        data[log_line_key] = 'Fail with VCS error'
                                    elif sim_status_keyword == "Simulation Passed":
                                        data[log_line_key] = 'Pass'
                                    elif sim_status_keyword == "FAIL=0 SKIP=0":
                                        data[log_line_key] = 'Pass'
                                    elif sim_status_keyword == "PASSED":
                                        data[log_line_key] = 'Pass'
                                    elif sim_status_keyword == "SoC Simulation Completed":
                                        data[log_line_key] = 'Pass'
                                    else:
                                        data[log_line_key] = 'Fail'
        start_print_fmax=-1
        bitstream_time_line=-1
        timinganalysis_time_line=-1
        Route_time_line=-1
        place_time_line=-1
        pack_time_line=-1
        syn_time_line=-1
        start_print_stats=-1
        start_pb_type_usage=-1
        synth_line=-1
        blocks_of_type_clb=-1
        line_of_total_wirelength=-1
        fle_percentage=0
        clb_used_percent=0
        wirelength_percentage=0
        total_clbs=0
        total_fles=0
        sum_dffs = 0
        sum_dsps = 0
        sum_brams = 0
        fle_used = 0
        CLB = 0
        LUTs = 0
        #start looping from end index of log and check the index where Printing statistics. occured, store in start variable
        for i in range(len(lines) - 1, -1, -1):
            if "Final critical path delay" in lines[i]:
                start_print_fmax = i
                break
        for i in range(len(lines) - 1, -1, -1):        
            if "GenerateBitstream has started" in lines[i]:
                bitstream_time_line = i
                break
        for i in range(len(lines) - 1, -1, -1):        
            if "TimingAnalysis has started" in lines[i]:
                timinganalysis_time_line = i
                break
        for i in range(len(lines) - 1, -1, -1):        
            if "Route has started" in lines[i]:
                Route_time_line = i
                break
        for i in range(len(lines) - 1, -1, -1):        
            if "Placement has started" in lines[i]:
                place_time_line = i
                break
        for i in range(len(lines) - 1, -1, -1):        
            if "Packing has started" in lines[i]:
                pack_time_line = i
                break
        for i in range(len(lines) - 1, -1, -1):        
            if "Synthesize has started" in lines[i]:
                syn_time_line = i
                break
        for i in range(len(lines) - 1, -1, -1):
            if "Printing statistics." in lines[i]:
                start_print_stats = i
                break
        for i in range(len(lines) - 1, -1, -1):
            if "is synthesized" in lines[i]:
                synth_line = i
                break
        for i in range(len(lines) - 1, -1, -1):
            if "Pb types usage..." in lines[i]:
                start_pb_type_usage = i
                break
        for i in range(len(lines) - 1, -1, -1):
            if "blocks of type: clb" in lines[i]:
                blocks_of_type_clb = i
                break
        for i in range(len(lines) - 1, -1, -1):
            if "Total wirelength:" in lines[i]:
                line_of_total_wirelength = i
                break
                
        for line in lines[start_print_stats+1:synth_line]:
            # Looping through each key and keyword in the log_line_keys_map for this log file
            for log_line_key, log_line_keyword in log_line_keys_map.items():
                # Checking if the keyword is in the current line
                if log_line_keyword in line: 
                    if log_line_key == 'total_luts':
                        LUTs = int(line.split(log_line_keyword)[1].strip().split()[0])
                        data[log_line_key] = LUTs
                    if log_line_key == 'Adder_Carry':
                        data[log_line_key]=int(line.split()[1])

                if log_line_key == 'dsp':
                    #the code splits the log line keyword by commas and loops through the resulting list of keywords.
                    dsp_keywords = log_line_keyword.split(',')
                    for dsp_keyword in dsp_keywords:
                        if dsp_keyword in line:
                            for var in line.split(dsp_keyword)[1].strip().split():
                            # Applying error - handling method
                                    try:
                                        sum_dsps = sum_dsps + int(var)
                                        data[log_line_key] = sum_dsps
                                    except ValueError:
                                        #If the conversion fails, the code stores the value "0" 
                                        data[log_line_key] = 0   
                elif log_line_key == 'registers':
                    dffs_keywords = log_line_keyword.split(',')
                    for dffs_keyword in dffs_keywords:
                        if dffs_keyword in line:
                            for var in line.split(dffs_keyword)[1].strip().split():
                            # Applying error - handling method
                                    try:
                                        sum_dffs = sum_dffs + int(var)
                                        data[log_line_key] = sum_dffs
                                    except ValueError:
                                        data[log_line_key] = 0
                elif log_line_key == 'brams':
                    brams_keywords = log_line_keyword.split(',')
                    for brams_keyword in brams_keywords:
                        if brams_keyword in line:
                            for var in line.split(brams_keyword)[1].strip().split():
                            # Applying error - handling method
                                    try:
                                        sum_brams = sum_brams + int(var)
                                        data[log_line_key] = sum_brams
                                    except ValueError:
                                        data[log_line_key] = 0
             
        for log_line_key, log_line_keyword in log_line_keys_map.items():
            if log_line_key == 'CLB':
                for line in lines:
                    if "Failed to find device which satisifies resource requirements required" in line:
                        CLB = int(line.split('(available')[0].split('clb:')[1].split(',')[0])
                        data[log_line_key] = CLB
                    elif "Pb types usage" in line:
                        for line in lines[start_pb_type_usage:]:
                            if "blocks of type: clb" in line:
                                CLB = int(line.split('blocks')[0])
                                data[log_line_key] = CLB
                                break
        ###########fle_percent/wirelength#############
        for line in lines[start_pb_type_usage+1:]:
            for log_line_key, log_line_keyword in log_line_keys_map.items():
                if log_line_keyword in line:
                    if log_line_key == 'FLE_Percentage_used':
                        fle_used=line.split()[2].strip()
        for line in lines[blocks_of_type_clb:]:
            if "blocks of type: clb" in line:
                total_clbs=line.split(log_line_keyword)[0].strip().split()[0]
                total_fles=8*int(total_clbs) # 100 * (#fle_wrapper) / (8 * #clb). 
            for log_line_key, log_line_keyword in log_line_keys_map.items():
                if total_clbs == 0:
                    fle_percentage=None
                else:
                    fle_percentage=100*int(fle_used)/int(total_fles)
                if log_line_key == 'FLE_Percentage_used':
                    data[log_line_key] = fle_percentage
            for log_line_key, log_line_keyword in log_line_keys_map.items():
                if total_clbs == 0:
                    clb_used_percent=None
                else:
                    clb_used_percent=(CLB/int(total_clbs))*100
                if log_line_key == 'CLB_percentage_used':
                    data[log_line_key] = clb_used_percent
        # parsing the percentage of metal used from raptor.log 
        for i in range(len(lines) - 1, -1, -1):
            if "Total tracks in x-direction:" in lines[i]:
                line_of_total_track_x = i
                y_directed_channel=lines[line_of_total_track_x-2].strip().split()[0]
                break
        for i in range(len(lines) - 1, -1, -1):
            if "Y - Directed channels:" in lines[i]:
                line_of_total_track_y = i
                x_directed_channel=lines[line_of_total_track_y-1].strip().split()[0]
                break
        for line in lines[line_of_total_wirelength:]:
            if "Total wirelength:" in line:
                total_wirelength=line.split()[2].split(",")[0]  
            if "Total tracks in x-direction:" in line:
                x_direction=line.split()[4].split(",")[0]
                y_direction=line.split()[7]
                total_available_wirelength=int(x_direction)*(int(y_directed_channel)+1) + int(y_direction)*(int(x_directed_channel)+1)              # Total available wirelength will be 720 * (10 + 1) + 1760 * (8 + 1)
                wirelength_percentage=100*int(total_wirelength)/int(total_available_wirelength)    #%metal used will be 100 * total_wirelength / total_available.
        for log_line_key, log_line_keyword in log_line_keys_map.items():
            if log_line_key == 'Wirelength_Percentage_used':
                if wirelength_percentage == 0:
                    data[log_line_key] = None
                else:
                    data[log_line_key] = wirelength_percentage
        #################################################        
                    
        for line in lines[bitstream_time_line:]:
            if "Duration: " in line:  
                data['bitstream_runtime'] = int(line.split('ms')[0].split('Duration:')[1])
                break
        for line in lines[timinganalysis_time_line:]:
            if "Duration: " in line:  
                data['time_analysis_runtime'] = int(line.split('ms')[0].split('Duration:')[1])
                break
        for line in lines[Route_time_line:]:
            if "Duration: " in line:  
                data['routing_runtime'] = int(line.split('ms')[0].split('Duration:')[1])
                break
        interation_placement=0
        place_time=0
        for line in lines[place_time_line:]:
            if "Duration: " in line:  
                place_time=int(line.split('ms')[0].split('Duration:')[1])+place_time
                data['placement_runtime'] = place_time
                interation_placement=interation_placement+1
                if interation_placement == 2:
                    break
        for line in lines[pack_time_line:]:
            if "Duration: " in line:  
                data['packing_runtime'] = int(line.split('ms')[0].split('Duration:')[1])
                break
        for line in lines[syn_time_line:]:
            if "Duration: " in line:  
                data['synthesis_runtime'] = int(line.split('ms')[0].split('Duration:')[1])
                break
        

        for line in lines[start_print_fmax:]:
            for log_line_key, log_line_keyword in log_line_keys_map.items():
                # Checking if the keyword is in the current line
                if log_line_keyword in line:   
                    # Checking the file name and updating the value of the log line key accordingly
                    if log_line_key == 'fmax':
                        data[log_line_key] = float(line.split(log_line_keyword)[1].strip().split()[0])  

                if log_line_key == "LUT_CLB_ratio":
                    if log_line_keyword == "LUT/CLB":
                        if CLB == 0:
                            luts_clbs_ratio=None
                        else:    
                            luts_clbs_ratio=LUTs/CLB
                        data[log_line_key]=luts_clbs_ratio
                                
              
##failure_type       
        for log_line_key, log_line_keyword in log_line_keys_map.items():
            if log_line_key == 'failure_type':
                for line in lines:
                    if "synthesis failed" in line:
                        data[log_line_key] = "SYN"
                    elif "packing failed" in line:
                        data[log_line_key] = "PAC"
                    elif "placement failed" in line:
                        data[log_line_key] = "PLC"
                    elif "routing failed" in line:
                        data[log_line_key] = "RTE"
                    elif "timing analysis failed" in line:
                        data[log_line_key] = "TMN"
                    elif "power analysis failed" in line:
                        data[log_line_key] = "PWR"
                    elif "bitstream generation failed" in line:
                        data[log_line_key] = "BIT"
                    elif "Simulation Failed" in line:
                        data[log_line_key] = "SIM"
                    elif "Error-" in line:
                        data[log_line_key] = "SIM"

#Pass message for negative test (Delete afterwards when async set reset support added)
        # for line in lines:
        #         if 'Generic DFFs. Abort Synthesis.' in line:
        #             for log_line_key, log_line_keyword in log_line_keys_map.items():
        #                 if log_line_key == 'status':
        #                     data[log_line_key] = 'Pass'
        #                 if log_line_key == 'error_msg':
        #                     data[log_line_key] = None
        #                 if log_line_key == 'failure_type':
        #                     data[log_line_key] = None

    return data

def main():
    # Open the keywords file and read the keywords mapping
    with open('./keywords.json', 'r') as f:
        log_line_keys_map = json.load(f)
    data = parse_log_files(sys.argv[1], log_line_keys_map)
    with open('CGA_Result.json', 'w') as f:
        json.dump(data, f, indent=4)

if __name__ == '__main__':
    print ("parser.py is being run directly")
    main()
else: 
    print ("parser.py is being imported")
    main()
