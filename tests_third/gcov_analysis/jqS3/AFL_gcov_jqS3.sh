#!/bin/bash
PROG="jq"
PROGOPT1="--slurp"
PROGOPT2="'[. | . | { hello: . }]'"
PROGOPT3="rebuilt_AFL/share/fixed.json"
INPUT_PATTERN="./solutions/jqS3/%s"
INPUT_CLEAN="inputs/fixed.json"
search_dir=./solutions/jqS3

export CC="/home/ubuntu/Desktop/AFL/afl-clang"
echo "Building buggy ${PROG}..."

# -- BUILD.SH --

rm -rf rebuilt_AFL
cd ./src/
make clean

make GCOV_PREFIX_STRIP="9999" CFLAGS+="-g -fprofile-arcs -ftest-coverage" LDFLAGS+="-g -fprofile-arcs"
# make install
# 
# mkdir ../rebuilt_AFL
# mv ./lava-install/bin ../rebuilt_AFL
# mv ./lava-install/share ../rebuilt_AFL
# 
# cd ..
# echo "Binaries built into rebuilt_AFL"
# 
# # -- BUILD.SH --
# 
# echo "Checking if buggy ${PROG} succeeds on non-trigger input..."
# ./rebuilt_AFL/bin/${PROG} ${PROGOPT1} '[. | . | { hello: . }]' ${INPUT_CLEAN} ${PROGOPT3} &> /dev/null
# rv=$?
# if [ $rv -lt 128 ]; then
#     echo "Success: ${PROG} ${PROGOPT1} '[. | . | { hello: . }]' ${INPUT_CLEAN} ${PROGOPT3} returned $rv"
# else
#     echo "ERROR: ${PROG} ${PROGOPT1} '[. | . | { hello: . }]' ${INPUT_CLEAN} ${PROGOPT3} returned $rv"
# fi
# 
# rm -rf all_bugs_AFL.txt
# rm -rf validated_bugs_exitcode_AFL.txt
# 
# for entry in "$search_dir"/*
# do
#   echo -e  "$entry" | sed 's/.*jqS3\///' >> all_bugs_AFL.txt
# done
# 
# echo "Validating bugs..."
# cat all_bugs_AFL.txt | while read line ; do
#     INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
#     { ./rebuilt_AFL/bin/${PROG} ${PROGOPT1} '[. | . | { hello: . }]' ${INPUT_FUZZ} ${PROGOPT3} ; } &> /dev/null
#     echo $line $?
# done > validated_bugs_exitcode_AFL.txt
# 
# awk 'BEGIN {valid = 0} $2 > 128 { valid += 1 } END { print "Validated", valid, "/", NR, "bugs" }' validated_bugs_exitcode_AFL.txt
# 
# echo "You can see validated_bugs_exitcode_AFL.txt for the exit code of each buggy version."
# 
# mkdir -p backtrace_AFL
# echo "Generating backtraces..."
# cat all_bugs_AFL.txt | while read line ; do
#     INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
#     { gdb -batch -ex "run ${PROGOPT1} '[. | . | { hello: . }]' ${INPUT_FUZZ} ${PROGOPT3}" -ex "bt" ./rebuilt_AFL/bin/${PROG}  2>&1 | grep -v ^"No stack."$ ; } &> backtrace_AFL/$line.txt
# done 
# 
