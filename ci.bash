#!/bin/bash
OS=`uname -s`
if [[$OS == Linux]]; then
	apt-get update
	apt-get install -y software-properties-common curl make gcc ggcov
	add-apt-repository -y ppa:snaipewastaken/ppa
	apt-get update
	apt-get install -y criterion-dev
else
	/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
	export HOMEBREW_NO_AUTO_UPDATE=1
	brew install snaipe/soft/criterion
fi
make GCOV=TRUE LINK=TRUE
./tests/tests
cd cmath
gcov -f -b -c calc/*.c trig/*.c
if [[ $1 == TRUE ]]; then
rm -rf *.c.gcov
fi