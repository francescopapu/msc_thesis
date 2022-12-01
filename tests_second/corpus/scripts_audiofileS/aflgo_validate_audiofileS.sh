#!/bin/bash
PROG="audiofile"
PROGOPT="/tmp/out.mp3 format aiff"
INPUT_PATTERN="../../solutions/audiofileS/%s"
INPUT_CLEAN="inputs/seed8.wav"
search_dir=../../solutions/audiofileS

export AFLGO="/home/francesco/Scrivania/aflgo"
export TMP_DIR=$PWD/temp

echo "Building buggy ${PROG} for AFLGo..."

shopt -s extglob
cd $TMP_DIR
rm -v !("BBtargets.txt")
cd ..
shopt -u extglob

# -- BUILD.SH PART 1 --

rm -rf ./aflgo_rebuilt

cd ./src
make clean

make CFLAGS="-targets=$TMP_DIR/BBtargets.txt -outdir=$TMP_DIR -flto -fuse-ld=gold -Wl,-plugin-opt=save-temps" CC="$AFLGO/afl-clang-fast" CFLAGS+="-g" LDFLAGS+="-g"
# make install

cd ..

# -- BUILD.SH PART 1 --

cat $TMP_DIR/BBnames.txt | rev | cut -d: -f2- | rev | sort | uniq > $TMP_DIR/BBnames2.txt && mv $TMP_DIR/BBnames2.txt $TMP_DIR/BBnames.txt
cat $TMP_DIR/BBcalls.txt | sort | uniq > $TMP_DIR/BBcalls2.txt && mv $TMP_DIR/BBcalls2.txt $TMP_DIR/BBcalls.txt

#$AFLGO/scripts/genDistance.sh $PWD/src $TMP_DIR audiofile
python3 $AFLGO/scripts/gen_distance_fast.py $PWD/src/src $TMP_DIR audiofile

# -- BUILD.SH PART 2 --

cd ./src/
make clean

make CFLAGS="-distance=$TMP_DIR/distance.cfg.txt" CC="$AFLGO/afl-clang-fast" CFLAGS+="-g" LDFLAGS+="-g"
make install

mkdir -p ../aflgo_rebuilt
mv ./lava-install/bin ../aflgo_rebuilt

cd ..

# -- BUILD.SH PART 2 --

echo "Checking if buggy ${PROG} succeeds on non-trigger input..."
./aflgo_rebuilt/bin/${PROG} ${INPUT_CLEAN} ${PROGOPT} &> /dev/null
rv=$?
if [ $rv -lt 128 ]; then
    echo "Success: ${PROG} ${INPUT_CLEAN} ${PROGOPT} returned $rv"
else
    echo "ERROR: ${PROG} ${INPUT_CLEAN} ${PROGOPT} returned $rv"
fi

rm -rf all_bugs_aflgo.txt
rm -rf validated_bugs_exitcode_aflgo.txt

for entry in "$search_dir"/*
do
  echo -e  "$entry" | sed 's/.*audiofileS\///' >> all_bugs_aflgo.txt
done

echo "Validating bugs..."
cat all_bugs_aflgo.txt | while read line ; do
    INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
    { ./aflgo_rebuilt/bin/${PROG} ${INPUT_FUZZ} ${PROGOPT} ; } &> /dev/null
    echo $line $?
done > validated_bugs_exitcode_aflgo.txt

awk 'BEGIN {valid = 0} $2 > 128 { valid += 1 } END { print "Validated", valid, "/", NR, "bugs" }' validated_bugs_exitcode_aflgo.txt

echo "You can see validated_bugs_exitcode_aflgo.txt for the exit code of each buggy version."

mkdir -p backtrace_aflgo
echo "Generating backtraces_aflgo..."
cat all_bugs_aflgo.txt | while read line ; do
    INPUT_FUZZ=$(printf "$INPUT_PATTERN" $line)
    { gdb -batch -ex "run ${INPUT_FUZZ} ${PROGOPT}" -ex "bt" ./aflgo_rebuilt/bin/${PROG}  2>&1 | grep -v ^"No stack."$ ; } &> backtrace_aflgo/$line.txt
done
