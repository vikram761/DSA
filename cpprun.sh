#!/bin/bash

# Check if the correct number of arguments is provided
if [ "$#" -lt 2 ]; then
    echo "Usage: $0 <main.cpp> <implementation>.cpp"
    exit 1
fi

# Extract filenames and create the output executable name
main_file="src/$1"
impl_file="src/$2"
output_name="exec/${1%.*}"

# Compile the code
g++ -o "$output_name" "$main_file" "$impl_file"

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    # Run the executable
    "./$output_name"
else
    echo "Compilation failed."
fi
