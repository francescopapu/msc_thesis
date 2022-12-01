#!/bin/bash
PROG="file"
PROGOPT="-m rebuilt_AFL/share/misc/magic.mgc"
INPUT_PATTERN="../../solutions/fileS4/%s"
INPUT_CLEAN="inputs/hello.txt"
export CC="/home/francesco/Scrivania/AFL/afl-clang"

echo "Building buggy ${PROG}..."

# -- BUILD.SH --
rm -rf rebuilt_AFL
cd ./src/

make clean
rm -rf src/magic.h

make magic.h
make CFLAGS+="-g -w" CFLAGS+="-m32" LDFLAGS+="-g" file2
make install

# Move our output into ../rebuilt_AFL
mv ./lava-install ../rebuilt_AFL
cd ..
echo "Challenge built into rebuilt_AFL"

# -- BUILD.SH --

echo "Checking if buggy ${PROG} succeeds on non-trigger input..."
./rebuilt_AFL/bin/${PROG} ${PROGOPT} ${INPUT_CLEAN} &> /dev/null
rv=$?
if [ $rv -lt 128 ]; then
    echo "Success: ${PROG} ${PROGOPT} ${INPUT_CLEAN} returned $rv"
else
    echo "ERROR: ${PROG} ${PROGOPT} ${INPUT_CLEAN} returned $rv"
fi

rm -rf all_bugs_AFL.txt
rm -rf validated_bugs_exitcode_AFL.txt
search_dir=../../solutions/fileS4
for entry in "$search_dir"/*
do
  echo -e  "$entry" | sed 's/.*fileS4\///' >> all_bugs_AFL.txt
done

echo "Validating bugs..."
cat all_bugs_AFL.txt | while read line ; do
    INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
    { ./rebuilt_AFL/bin/${PROG} ${PROGOPT} ${INPUT_FUZZ} ; } &> /dev/null
    echo $line $?
done > validated_bugs_exitcode_AFL.txt

awk 'BEGIN {valid = 0} $2 > 128 { valid += 1 } END { print "Validated", valid, "/", NR, "bugs" }' validated_bugs_exitcode_AFL.txt

echo "You can see validated_bugs_exitcode_AFL.txt for the exit code of each buggy version."

mkdir -p backtrace_AFL
echo "Generating backtraces..."
cat all_bugs_AFL.txt | while read line ; do
    INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
    { gdb -batch -ex "run ${PROGOPT} ${INPUT_FUZZ}" -ex "bt" ./rebuilt_AFL/bin/${PROG}  2>&1 | grep -v ^"No stack."$ ; } &> backtrace_AFL/$line.txt
done 

