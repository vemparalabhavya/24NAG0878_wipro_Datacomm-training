#!/usr/bin/bash
i=17
until [ $i == 1 ];
do
   echo "$i is not equal to 1"
   i=$((i-1))
done
echo "i value is $i"

