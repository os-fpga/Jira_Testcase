import re
import sys

def bin_to_hex(match):
    binary_string = match.group(2)  # Get the binary part
    hex_number = hex(int(binary_string, 2))[2:]  # Convert to hex and remove '0x'
    return f"36864'h{hex_number}"

def convert_file(input_file, output_file):
    with open(input_file, 'r') as file:
        content = file.read()

    # Replace binary number with its hexadecimal equivalent
    modified_content = re.sub(r'(36864\'b)([01]+)', bin_to_hex, content)

    with open(output_file, 'w') as file:
        file.write(modified_content)

if __name__ == "__main__":
    input_file_path = sys.argv[1]
    output_file_path = sys.argv[2]
    convert_file(input_file_path, output_file_path)
 
