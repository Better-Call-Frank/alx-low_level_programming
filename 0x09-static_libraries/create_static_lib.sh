#!/bin/bash

# Get all the .c files in the current directory
c_files=$(ls *.c)

# Compile each .c file into an object file
for file in $c_files
do
    gcc -c $file
done

# Create the static library from the object files
ar rcs liball.a *.o

# Clean up by removing the object files
rm -f *.o

echo "Static library liball.a has been created."
