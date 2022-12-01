#!/bin/bash
PROG="uniq"
PROGOPT=""
INPUT_PATTERN="inputs/man-clang3-sorted-fuzzed-%s"
INPUT_CLEAN="inputs/man-clang3-sorted"
CC="/home/francesco/Scrivania/AFL/afl-clang"

echo "Building buggy ${PROG}... with CC=${CC}"

cd coreutils-8.24-lava-safe
make clean
./configure CC=${CC} --prefix=`pwd`/lava-install LIBS="-lacl"
make CC=${CC}
# make CC=${CC} install
# cd ..
#
# echo "Checking if buggy ${PROG} succeeds on non-trigger input..."
# ./coreutils-8.24-lava-safe/lava-install/bin/${PROG} ${PROGOPT} ${INPUT_CLEAN} &> /dev/null
# rv=$?
# if [ $rv -lt 128 ]; then
#     echo "Success: ${PROG} ${PROGOPT} ${INPUT_CLEAN} returned $rv"
# else
#     echo "ERROR: ${PROG} ${PROGOPT} ${INPUT_CLEAN} returned $rv"
# fi
#
# echo "Validating bugs..."
# cat validated_bugs | while read line ; do
#     INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
#     { ./coreutils-8.24-lava-safe/lava-install/bin/${PROG} ${PROGOPT} ${INPUT_FUZZ} ; } &> /dev/null
#     echo $line $?
# done > validated_AFL.txt
#
# awk 'BEGIN {valid = 0} $2 > 128 { valid += 1 } END { print "Validated", valid, "/", NR, "bugs" }' validated_AFL.txt
#
# echo "You can see validated_AFL.txt for the exit code of each buggy version."
