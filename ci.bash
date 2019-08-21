#!/bin/bash
apt-get install -y sudo
apt-get install software-properties-common
add-apt-repository -y ppa:snaipewastaken/ppa
apt-get update
apt-get install -y criterion-dev
make GCOV=TRUE
./tests/tests
cd cmath
gcov -f -b -c calc/*.c trig/*.c 1>/dev/null 2>/dev/null
if [[ $1 == TRUE ]]; then
rm -rf *.c.gcov
fi
