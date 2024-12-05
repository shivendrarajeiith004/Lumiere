#!/bin/bash

# Exit the script on any error
set -e

# Build the project using the Makefile
echo "Building the project..."
make run

# Directory containing input files
input_dir="test"

# Check if the input directory exists
if [[ ! -d $input_dir ]]; then
    echo "Error: Directory '$input_dir' does not exist."
    exit 1
fi

# Loop over all files in the input directory
echo "Processing input files in '$input_dir'..."
for input_file in "$input_dir"/*; do
    if [[ -f $input_file ]]; then
        echo "Running ./calc with input file: $input_file"
        ./calc "$input_file"
    else
        echo "Skipping non-file: $input_file"
    fi
done

echo "All files processed."
