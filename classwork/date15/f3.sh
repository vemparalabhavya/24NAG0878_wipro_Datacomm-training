#!/bin/bash
fname="info.txt"
while read -a FILE;
do
 if [`echo $FILE | grep 004` ];
 then
 echo "line is ">> info.txt
 break
fi
echo $FILE
done < $fname
