#!/bin/bash
gcc -lm -Wall -Werror -c -o build/func.o func.c
gcc -Wall -Werror -c -o build/gm.o gm.c
gcc build/func.o build/gm.o -o bin/circles
rm build/func.o build/gm.o
