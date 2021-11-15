#!/bin/bash

# For all folders in the current directory
for folder in */; do
    cd $folder
    # For all *.tex files in folders
    for file in *.tex; do
        # Build the file
        xelatex $file
    done
    cd ..
done
