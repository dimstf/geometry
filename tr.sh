#!/bin/bash
gcc -lm -Wall -Werror -c -o build/func.o func.c
gcc -lm -Wall -Werror -c -o build/gm.o gm.c
gcc -lm build/func.o build/gm.o -o bin/circles
rm build/func.o build/gm.o
echo "Done"
gcc -lm -Wall -Werror -c -o build/functest.o func.c
gcc -lm -Wall -Werror -c -o build/test.o test/test1.c
gcc -lm build/test.o build/functest.o -o bin/test
echo "test part"
bin/./test
