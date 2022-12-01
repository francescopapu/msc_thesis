#!/bin/bash
PROG="jpeg"
PROGOPT=""
INPUT_PATTERN="../../solutions/jpegS5/%s"
INPUT_CLEAN="inputs/logo.jpg"
# CC="/home/ubuntu/Desktop/aflgo/afl-clang-fast"
# export TMP_DIR=$PWD/temp

echo "Building buggy ${PROG}..."

# -- BUILD.SH --
rm -rf rebuilt
cd ./src/

make clean

# Adding -g and LDFLAGS
make CFLAGS+="-g -w" CFLAGS+="-m32" LDFLAGS+="-g" -j 16
make install

# Move our output into ../rebuilt
mv ./lava-install ../rebuilt
cd ..
echo "Challenge built into rebuilt/"

# -- RUN THIS IN THE TERMINAL --
#export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:$PWD/rebuilt/lib/"

# -- BUILD.SH --

echo "Checking if buggy ${PROG} succeeds on non-trigger input..."
./rebuilt/bin/${PROG} ${PROGOPT} ${INPUT_CLEAN} &> /dev/null
rv=$?
if [ $rv -lt 128 ]; then
    echo "Success: ${PROG} ${PROGOPT} ${INPUT_CLEAN} returned $rv"
else
    echo "ERROR: ${PROG} ${PROGOPT} ${INPUT_CLEAN} returned $rv"
fi

rm -rf all_bugs.txt
rm -rf validated_bugs_exitcode.txt
search_dir=../../solutions/jpegS5
for entry in "$search_dir"/*
do
  echo -e  "$entry" | sed 's/.*jpegS5\///' >> all_bugs.txt
done

echo "Validating bugs..."
cat all_bugs.txt | while read line ; do
    INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
    { ./rebuilt/bin/${PROG} ${PROGOPT} ${INPUT_FUZZ} ; } &> /dev/null
    echo $line $?
done > validated_bugs_exitcode.txt

awk 'BEGIN {valid = 0} $2 > 128 { valid += 1 } END { print "Validated", valid, "/", NR, "bugs" }' validated_bugs_exitcode.txt

echo "You can see validated_bugs_exitcode.txt for the exit code of each buggy version."

mkdir -p backtrace
echo "Generating backtraces..."
cat all_bugs.txt | while read line ; do
    INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
    { gdb -batch -ex "run ${PROGOPT} ${INPUT_FUZZ}" -ex "bt" ./rebuilt/bin/${PROG}  2>&1 | grep -v ^"No stack."$ ; } &> backtrace/$line.txt
done 

