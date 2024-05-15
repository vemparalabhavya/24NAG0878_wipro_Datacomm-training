#!/bin/bash
debug_mode=false
if [ "$debug_mode" = true ]; then
set -x
fi
mkdir -p TestDir1 && cd TestDir1 || { echo "Failed to create or change directory"; exit 1;}
for (( i=1; i<=10; i++ )); 
do
   echo "File$i.txt" > "File$i.txt" || [echo "Failed to create File$i.txt"; exit 1;]
done

