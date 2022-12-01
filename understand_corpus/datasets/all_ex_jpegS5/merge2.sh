#!/bin/bash

# in_1=$1
# in_2=$2
# out=$3
#
# awk 'FNR > 1' $in_2 > temp2_noheading.csv
# cat $in_1 temp2_noheading.csv > $out
#
# rm -rf temp2_noheading.csv

shopt -s nullglob
array=(*.csv)

# echo "${array[0]}"

awk 'NR==1{print $1}' ${array[0]} > output.csv

for filename in ${array[@]}; do
    awk 'FNR > 1' $filename >> output.csv
done
