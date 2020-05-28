#!/bin/bash
gcc -lm -Wall -Werror -c -o build/functest.o func.c
gcc -lm -Wall -Werror -c -o build/test.o test/test1.c
gcc -lm build/test.o build/functest.o -o bin/test
cd bin
./test
