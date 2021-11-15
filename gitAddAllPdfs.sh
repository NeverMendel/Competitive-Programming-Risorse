#!/bin/bash

# For all folders in the current directory
for folder in */; do
    cd $folder
    files=$(find -iname '*.pdf')
    for file in $files; do
        git add $file
    done
    cd ..
done