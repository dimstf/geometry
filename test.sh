#!/bin/bash
gcc -Wall -Werror -lm -c -o build/functest.o func.c
gcc -Wall -Werror -c -o build/test.o test/test1.c
gcc build/test.o build/functest.o -o bin/test
cd bin
./test
