#!/bin/bash

set -x
set -e

rm -rf rebuilt
cd ./src
make clean | true

make CFLAGS+="-m32"
make install

mkdir ../rebuilt
cp -r lava-install/bin ../rebuilt

cd ..
echo "Binaries built in ./rebuilt"
