#!/bin/bash
# export AFLGO=/home/ubuntu/Desktop/aflgo
# $AFLGO/afl-fuzz -z exp -c 45m -i fuzzer_input/ -o out ./uniq -c @@

PROG="uniq"
PROGOPT=""
INPUT_PATTERN="inputs/man-clang3-sorted-fuzzed-%s"
INPUT_CLEAN="inputs/man-clang3-sorted"

mkdir -p temp
export CC="/home/ubuntu/Desktop/aflgo/afl-clang-fast"
export TMP_DIR=$PWD/temp

echo "Building buggy ${PROG}... with CC=${CC}"

cd coreutils-8.24-lava-safe

rm -rf *.bc
rm -rf src/*.bc
rm -rf src/*.txt

make clean &> /dev/null
./configure CFLAGS="-targets=$TMP_DIR/BBtargets.txt -outdir=$TMP_DIR -flto -fuse-ld=gold -Wl,-plugin-opt=save-temps" CC="/home/ubuntu/Desktop/aflgo/afl-clang-fast" LIBS="-lacl" &> /dev/null
make src/uniq

cd ..

# Return to "root". This is "uniq" folder.

# FINISHED FIRST BUILD

cat $TMP_DIR/BBnames.txt | rev | cut -d: -f2- | rev | sort | uniq > $TMP_DIR/BBnames2.txt && mv $TMP_DIR/BBnames2.txt $TMP_DIR/BBnames.txt
cat $TMP_DIR/BBcalls.txt | sort | uniq > $TMP_DIR/BBcalls2.txt && mv $TMP_DIR/BBcalls2.txt $TMP_DIR/BBcalls.txt

# Usage: /home/ubuntu/Desktop/aflgo/scripts/genDistance.sh <binaries-directory> <temporary-directory> [fuzzer-name]

/home/ubuntu/Desktop/aflgo/scripts/genDistance.sh $PWD/coreutils-8.24-lava-safe $TMP_DIR ${PROG}

cd coreutils-8.24-lava-safe

make clean &> /dev/null
./configure CFLAGS="-distance=$TMP_DIR/distance.cfg.txt" CC="/home/ubuntu/Desktop/aflgo/afl-clang-fast" LIBS="-lacl" &> /dev/null
make src/uniq &> /dev/null

cd ..

echo "Checking if buggy ${PROG} succeeds on non-trigger input..."
./coreutils-8.24-lava-safe/src/${PROG} ${PROGOPT} ${INPUT_CLEAN} &> /dev/null
rv=$?
if [ $rv -lt 128 ]; then
    echo "Success: ${PROG} ${PROGOPT} ${INPUT_CLEAN} returned $rv"
else
    echo "ERROR: ${PROG} ${PROGOPT} ${INPUT_CLEAN} returned $rv"
fi


echo "Validating bugs..."
cat validated_bugs | while read line ; do
    INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
    { ./coreutils-8.24-lava-safe/src/${PROG} ${PROGOPT} ${INPUT_FUZZ} ; } &> /dev/null
    echo $line $?
done > validated_aflgo.txt

awk 'BEGIN {valid = 0} $2 > 128 { valid += 1 } END { print "Validated", valid, "/", NR, "bugs" }' validated_aflgo.txt

echo "You can see validated_aflgo.txt for the exit code of each buggy version."