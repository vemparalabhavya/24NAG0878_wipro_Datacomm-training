#!/bin/bash
echo -n "Enter age:"
read age
if [ $age -gt 18  && $age -lt 65 ]; then
echo "You are eligible to vote"
elif [ $age -gt 65 ]; then
echo "You are eligible for senior citizens benefits"
else
echo "You are not eligible to vote"
fi

