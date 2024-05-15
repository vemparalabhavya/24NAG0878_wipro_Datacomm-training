#!/bin/bash
grep "ERROR" sample.log | awk -f '{print $1,$2,$3,$0}'








