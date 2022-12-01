#!/bin/bash

PROG="uniq"
QUEUE_FOLDER_PATTERN="sync_dir/uniqAFL%s/queue"
PROG_LOC="./coreutils-8.24-lava-safe/src"
PROGOPT1=""
PROGOPT2=""

fuzzer=$1
step=$2     #step to skip running gcovr and outputting data to covfile
            #e.g., step=5 means we run gcovr after every 5 test cases
covfile=$3  #path to coverage file

# export GCOV_PREFIX="."
# export GCOV_PREFIX_STRIP="5"

#delete the existing coverage file
rm -rf ${covfile}


#output the header of the coverage file which is in the CSV format
#Time: timestamp, l_per/b_per and l_abs/b_abs: line/branch coverage in percentage and absolutate number
echo "fuzzer,instance,time,l_per,l_abs,b_per,b_abs" >> ${covfile}


for i in {0..9}; do
QUEUE_FOLDER=$(printf "$QUEUE_FOLDER_PATTERN" $i)
echo "Processing queue folder number $i"

#clear gcov data
#-r sarebbe root directory
#-s sarebbe stampa un piccolo report, è ciò che usa dopo
#-d serve per il delete
cd ./coreutils-8.24-lava-safe/src
gcovr -r . -s -d > /dev/null 2>&1
cd ../../

  #process other testcases
  count=0
  for f in $(echo $QUEUE_FOLDER/id*); do
    time=$(stat -c %Y $f)

    printf "Count = $count\r"

    timeout -k 0 3s $PROG_LOC/${PROG} $f > /dev/null 2>&1

    wait
    count=$(expr $count + 1)
    rem=$(expr $count % $step)
    if [ "$rem" != "0" ]; then continue; fi
    cd ./coreutils-8.24-lava-safe/src
    cov_data=$(gcovr -r . -s | grep "[lb][a-z]*:")
    cd ../../
    l_per=$(echo "$cov_data" | grep lines | cut -d" " -f2 | rev | cut -c2- | rev)
    l_abs=$(echo "$cov_data" | grep lines | cut -d" " -f3 | cut -c2-)
    b_per=$(echo "$cov_data" | grep branch | cut -d" " -f2 | rev | cut -c2- | rev)
    b_abs=$(echo "$cov_data" | grep branch | cut -d" " -f3 | cut -c2-)

    echo "$fuzzer,$i,$time,$l_per,$l_abs,$b_per,$b_abs" >> ${covfile}
  done

  echo "Processing the last testcases for folder $i"

  #ouput cov data for the last testcase(s) if step > 1
  if [[ $step -gt 1 ]]
  then
    time=$(stat -c %Y $f)
    cd ./coreutils-8.24-lava-safe/src
    cov_data=$(gcovr -r . -s | grep "[lb][a-z]*:")
    cd ../../
    l_per=$(echo "$cov_data" | grep lines | cut -d" " -f2 | rev | cut -c2- | rev)
    l_abs=$(echo "$cov_data" | grep lines | cut -d" " -f3 | cut -c2-)
    b_per=$(echo "$cov_data" | grep branch | cut -d" " -f2 | rev | cut -c2- | rev)
    b_abs=$(echo "$cov_data" | grep branch | cut -d" " -f3 | cut -c2-)

    echo "$fuzzer,$i,$time,$l_per,$l_abs,$b_per,$b_abs" >> ${covfile}
  fi
done
