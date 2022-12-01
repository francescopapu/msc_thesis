#!/bin/bash
PROG="bzip2"
PROGOPT1="-dsc"
PROGOPT2="> /tmp/output"
# INPUT_PATTERN="../../solutions/bzipS/%s"
# INPUT_CLEAN="inputs/sample.txt.bz2"
# search_dir=../../solutions/bzipS

export CC="/home/francesco/Desktop/AFL/afl-clang"
echo "Building buggy ${PROG}..."

# -- BUILD.SH --

rm -rf rebuilt_AFL
cd ./src/
make clean

make CFLAGS+="-g -fprofile-arcs -ftest-coverage" LDFLAGS+="-g -fprofile-arcs"
# make install
#
# mkdir ../rebuilt_AFL
# mv ./lava-install/bin ../rebuilt_AFL
#
# cd ..
# echo "Binaries built into rebuilt_AFL"
#
# # -- BUILD.SH --
#
# echo "Checking if buggy ${PROG} succeeds on non-trigger input..."
# ./rebuilt_AFL/bin/${PROG} ${PROGOPT1} ${INPUT_CLEAN} ${PROGOPT2} &> /dev/null
# rv=$?
# if [ $rv -lt 128 ]; then
#     echo "Success: ${PROG} ${PROGOPT1} ${INPUT_CLEAN} ${PROGOPT2} returned $rv"
# else
#     echo "ERROR: ${PROG} ${PROGOPT1} ${INPUT_CLEAN} ${PROGOPT2} returned $rv"
# fi
#
# rm -rf all_bugs_AFL.txt
# rm -rf validated_bugs_exitcode_AFL.txt
#
# for entry in "$search_dir"/*
# do
#   echo -e  "$entry" | sed 's/.*bzipS\///' >> all_bugs_AFL.txt
# done
#
# echo "Validating bugs..."
# cat all_bugs_AFL.txt | while read line ; do
#     INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
#     { ./rebuilt_AFL/bin/${PROG} ${PROGOPT1} ${INPUT_FUZZ} ${PROGOPT2} ; } &> /dev/null
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
#     { gdb -batch -ex "run ${PROGOPT1} ${INPUT_FUZZ} ${PROGOPT2}" -ex "bt" ./rebuilt_AFL/bin/${PROG}  2>&1 | grep -v ^"No stack."$ ; } &> backtrace_AFL/$line.txt
# done

