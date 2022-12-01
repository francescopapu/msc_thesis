#!/bin/bash

PROG="jpeg"
QUEUE_FOLDER_PATTERN="sync_dir/jpegAFL%s/queue"
PROG_LOC="./src/src/"

fuzzer=$1
step=$2     #step to skip running gcovr and outputting data to covfile
            #e.g., step=5 means we run gcovr after every 5 test cases
covfile=$3  #path to coverage file


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
gcovr -r $PROG_LOC -s -d > /dev/null 2>&1

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
    cov_data=$(gcovr -r $PROG_LOC -s --gcov-executable "llvm-cov gcov" | grep "[lb][a-z]*:")
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
    cov_data=$(gcovr -r $PROG_LOC -s --gcov-executable "llvm-cov gcov" | grep "[lb][a-z]*:")
    l_per=$(echo "$cov_data" | grep lines | cut -d" " -f2 | rev | cut -c2- | rev)
    l_abs=$(echo "$cov_data" | grep lines | cut -d" " -f3 | cut -c2-)
    b_per=$(echo "$cov_data" | grep branch | cut -d" " -f2 | rev | cut -c2- | rev)
    b_abs=$(echo "$cov_data" | grep branch | cut -d" " -f3 | cut -c2-)

    echo "$fuzzer,$i,$time,$l_per,$l_abs,$b_per,$b_abs" >> ${covfile}
  fi
done
