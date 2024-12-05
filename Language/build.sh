#!/bin/bash

# Define the list of folders
folders=("Phase1-Tokens" "Phase2-3-Parsing_Syntax" "Phase4-Semantics")

# Loop over each folder
for folder in "${folders[@]}"; do
  # Check if the src directory exists in the current folder
  if [ -d "$folder/src" ]; then
    echo "Processing $folder/src..."

    # Navigate to the src directory
    cd "$folder/src"

    # Run make commands
    echo "Running 'make' in $folder/src"
    make

    echo "Running 'make run' in $folder/src"
    make run

    #echo "Running 'make clean' in $folder/src"
    #make clean

    # Return to the previous directory
    cd - || exit
  else
    echo "Source directory not found in $folder"
  fi
done

echo "All tasks completed."
