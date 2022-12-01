#!/bin/bash

in_1=$1
in_2=$2
out=$3

awk 'FNR > 1' $in_2 > temp2_noheading.csv
cat $in_1 temp2_noheading.csv > $out

rm -rf temp2_noheading.csv
