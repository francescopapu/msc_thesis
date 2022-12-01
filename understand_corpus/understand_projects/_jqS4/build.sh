#!/bin/bash

set -x
set -e

rm -rf rebuilt
cd ./src
make clean | true

CFLAGS="-m32" make LDFLAGS+="-all-static"
make install

mkdir ../rebuilt
cp -r lava-install/* ../rebuilt

cd ..
echo "Binaries built in ./rebuilt"
