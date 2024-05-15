#!/bin/bash
fname="info.txt"
while IFS=read -r line
do
  echo "$line"
done < info.txt > output.txt
