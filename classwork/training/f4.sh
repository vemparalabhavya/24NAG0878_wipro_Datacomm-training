#!/bin/bash
mkdir -p TestDir || { echo "Failed to create directory"; exit 1; }
cd TestDir || { echo "Failed to change directory"; exit 1; }
for (( i=1 ; i<=10 ; i++ )); 
do
   echo "File$i.txt" > "File$i.txt" || { echo "Failed to create File$i.txt"; exit 1; }
done

