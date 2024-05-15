#!/bin/bash
count_lines() {
filename="$1"
lines=$(wc -l < "$filename")
echo "Number of lines in $filename: $lines"
}
count_lines "f1.sh"
count_lines "f1.sh"










