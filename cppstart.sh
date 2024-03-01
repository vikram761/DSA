#!/bin/bash

# Get the current directory name as the project name
project_name="$(basename "$(pwd)")"

# Create the project folder
read -p "Enter the project folder name: " folder_name
mkdir "$folder_name"
cd "$folder_name" || exit
# Create the src and exec folders
mkdir src exec

# Create the main.cpp file with boilerplate code
echo "#include <iostream>

using namespace std;

int main() {
    cout << \"Hello, World!\" << endl;
    return 0;
}" > src/main.cpp

# Create the header folder and the header file
mkdir src/header
echo "#pragma once" > src/header/"$project_name.h"
