#!/bin/bash
PROG="jq"
PROGOPT1="--slurp '[. | . | { hello: . }]'"
PROGOPT2="rebuilt/share/fixed.json"
INPUT_PATTERN="../../solutions/jqS3/%s"
INPUT_CLEAN="inputs/fixed.json"
search_dir=../../solutions/jqS3

echo "Building buggy ${PROG}..."

# -- BUILD.SH --

rm -rf rebuilt
cd ./src
make clean

make CFLAGS+="-m32 -g" LDFLAGS+="-g"
make install

mkdir ../rebuilt
cp -r lava-install/bin ../rebuilt
cp -r lava-install/share ../rebuilt

cd ..
echo "Binaries built in ./rebuilt"

-- BUILD.SH --

echo "Checking if buggy ${PROG} succeeds on non-trigger input..."
# ./rebuilt/bin/${PROG} ${PROGOPT1} ${INPUT_CLEAN} ${PROGOPT2} &> /dev/null
./rebuilt/bin/jq --slurp '[. | . | { hello: . }]' ${INPUT_CLEAN} ./rebuilt/share/fixed.json &> /dev/null
rv=$?
if [ $rv -lt 128 ]; then
    echo "Success: ${PROG} ${PROGOPT1} ${INPUT_CLEAN} ${PROGOPT2} returned $rv"
else
    echo "ERROR: ${PROG} ${PROGOPT1} ${INPUT_CLEAN} ${PROGOPT2} returned $rv"
fi

rm -rf all_bugs.txt
rm -rf validated_bugs_exitcode.txt

for entry in "$search_dir"/*
do
  echo -e  "$entry" | sed 's/.*jqS3\///' >> all_bugs.txt
done

echo "Validating bugs..."
cat all_bugs.txt | while read line ; do
    INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
    { ./rebuilt/bin/jq --slurp '[. | . | { hello: . }]' ${INPUT_FUZZ} ./rebuilt/share/fixed.json ; } &> /dev/null
    echo $line $?
done > validated_bugs_exitcode.txt

awk 'BEGIN {valid = 0} $2 > 128 { valid += 1 } END { print "Validated", valid, "/", NR, "bugs" }' validated_bugs_exitcode.txt

echo "You can see validated_bugs_exitcode.txt for the exit code of each buggy version."

mkdir -p backtrace_base
echo "Generating backtraces..."
cat all_bugs.txt | while read line ; do
    INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
    { gdb -batch -ex "run --slurp '[. | . | { hello: . }]' ${INPUT_FUZZ} ./rebuilt/share/fixed.json" -ex "bt" ./rebuilt/bin/jq  2>&1 | grep -v ^"No stack."$ ; } &> backtrace_base/$line.txt
done 

