#!/bin/bash
filename="myfile.txt"
if [ -e "$filename" ]; then
echo "File exists"
else
echo "File not found"
fi

