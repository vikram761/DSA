#!/bin/bash

# Get the current working directory
CURRENT_DIR=$(pwd)

# Extract project name from the path
PROJECT_NAME=$(basename "$CURRENT_DIR")

SOURCE_FOLDER="src"
EXEC_FOLDER="exec"

# Ensure the exec folder exists
mkdir -p "$CURRENT_DIR/$EXEC_FOLDER"

# Extract filename without extension
FILENAME=$(basename "$1" .cpp)

# Compile and link
g++ "$CURRENT_DIR/$SOURCE_FOLDER/$1" -o "$CURRENT_DIR/$EXEC_FOLDER/$FILENAME"

# Run the executable
"$CURRENT_DIR/$EXEC_FOLDER/$FILENAME"
