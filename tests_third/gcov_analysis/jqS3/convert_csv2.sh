#!/bin/bash
prog=$1         #name of the subject program (e.g., lightftp)
fuzzers=$2       #name of the fuzzer
input_file=$3   #input file
covfile=$4      #output CSV file


# #create a new file if append = 0
# if [ $append = "0" ]; then
rm -rf $covfile; touch $covfile
echo "time,subject,fuzzer,instance,cov_type,cov" >> $covfile
# fi

#remove space(s) 
#it requires that there is no space in the middle
strim() {
  trimmedStr=$1
  echo "${trimmedStr##*( )}"
}

#original format: fuzzer,instance,time,l_per,l_abs,b_per,b_abs
#converted format: time,subject,fuzzer,instance,cov_type,cov
convert() {
  fuzzer=$1
  subject=$2
  ifile=$3
  ofile=$4

  {
    read #ignore the header
    while read -r line; do
      instance=$(strim $(echo $line | cut -d',' -f2))
      time=$(strim $(echo $line | cut -d',' -f3))
      l_per=$(strim $(echo $line | cut -d',' -f4))
      l_abs=$(strim $(echo $line | cut -d',' -f5))
      b_per=$(strim $(echo $line | cut -d',' -f6))
      b_abs=$(strim $(echo $line | cut -d',' -f7))
      echo $time,$subject,$fuzzer,$instance,"l_per",$l_per >> $ofile
      echo $time,$subject,$fuzzer,$instance,"l_abs",$l_abs >> $ofile
      echo $time,$subject,$fuzzer,$instance,"b_per",$b_per >> $ofile
      echo $time,$subject,$fuzzer,$instance,"b_abs",$b_abs >> $ofile
    done 
  } < $ifile
}


for fuzzer in $fuzzers; do
    convert $fuzzer $prog $input_file $covfile
done


