#!/bin/bash
sudo add-apt-repository -y ppa:snaipewastaken/ppa
sudo apt-get update
sudo apt-get install -y criterion-dev
make GCOV=TRUE
./tests/tests
cd cmath
gcov -f -b -c calc/*.c trig/*.c 1>/dev/null 2>/dev/null
if [[ $1 == TRUE ]]; then
rm -rf *.c.gcov
fi
