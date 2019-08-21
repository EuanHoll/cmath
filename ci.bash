#!/bin/bash
export HOMEBREW_NO_AUTO_UPDATE=1
brew install snaipe/soft/criterion
make GCOV=TRUE
./tests/tests
cd cmath
gcov -f -b -c calc/*.c trig/*.c 1>/dev/null 2>/dev/null
if [[ $1 == TRUE ]]; then
rm -rf *.c.gcov
fi
