#!/bin/bash
PROG="file"
PROGOPT="-m rebuilt/share/misc/magic.mgc"
INPUT_PATTERN="../../solutions/fileS4/%s"
INPUT_CLEAN="inputs/hello.txt"

echo "Building buggy ${PROG}..."

# -- BUILD.SH --

rm -rf rebuilt
cd ./src/

make clean

make CFLAGS+="-g -w" CFLAGS+="-m32" LDFLAGS+="-g" -j 16
make install

# Move our output into ../rebuilt
mv ./lava-install ../rebuilt/
cd ..
echo "Challenge built into rebuilt/"

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
search_dir=../../solutions/fileS4
for entry in "$search_dir"/*
do
  echo -e  "$entry" | sed 's/.*fileS4\///' >> all_bugs.txt
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

