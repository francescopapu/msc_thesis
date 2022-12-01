#!/bin/bash
PROG="audiofile"
PROGOPT="/tmp/out.mp3 format aiff"
INPUT_PATTERN="../../solutions/audiofileS/%s"
INPUT_CLEAN="inputs/seed8.wav"

echo "Building buggy ${PROG}..."

# -- BUILD.SH --

rm -rf rebuilt
cd ./src
make clean

make CFLAGS+="-g" LDFLAGS+="-g"
make install

mkdir ../rebuilt
cp -r lava-install/bin ../rebuilt

cd ..
echo "Binaries built in ./rebuilt"

# -- BUILD.SH --

echo "Checking if buggy ${PROG} succeeds on non-trigger input..."
./rebuilt/bin/${PROG} ${INPUT_CLEAN} ${PROGOPT}  &> /dev/null
rv=$?
if [ $rv -lt 128 ]; then
    echo "Success: ${PROG} ${INPUT_CLEAN} ${PROGOPT} returned $rv"
else
    echo "ERROR: ${PROG} ${INPUT_CLEAN} ${PROGOPT} returned $rv"
fi

rm -rf all_bugs.txt
rm -rf validated_bugs_exitcode.txt
search_dir=../../solutions/audiofileS
for entry in "$search_dir"/*
do
  echo -e  "$entry" | sed 's/.*audiofileS\///' >> all_bugs.txt
done

echo "Validating bugs..."
cat all_bugs.txt | while read line ; do
    INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
    { ./rebuilt/bin/${PROG} ${INPUT_FUZZ} ${PROGOPT} ; } &> /dev/null
    echo $line $?
done > validated_bugs_exitcode.txt

awk 'BEGIN {valid = 0} $2 > 128 { valid += 1 } END { print "Validated", valid, "/", NR, "bugs" }' validated_bugs_exitcode.txt

echo "You can see validated_bugs_exitcode.txt for the exit code of each buggy version."

mkdir -p backtrace
echo "Generating backtraces..."
cat all_bugs.txt | while read line ; do
    INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
    { gdb -batch -ex "run ${INPUT_FUZZ} ${PROGOPT}" -ex "bt" ./rebuilt/bin/${PROG}  2>&1 | grep -v ^"No stack."$ ; } &> backtrace/$line.txt
done 

