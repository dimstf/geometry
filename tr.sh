#!/bin/bash
gcc -lm -Wall -Werror -c -o build/func.o func.c
gcc -lm -Wall -Werror -c -o build/gm.o gm.c
gcc -lm build/func.o build/gm.o -o bin/circles
rm build/func.o build/gm.o
echo "Done"
