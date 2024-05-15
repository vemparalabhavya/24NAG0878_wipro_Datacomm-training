#!/usr/bin/bash
a=7
while [ $a -gt 1 ];
do 
echo $a
((a--))
done
echo "outside the loop"

