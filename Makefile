.PHONY: clean test
CC=gcc
CFLAGS=-Wall -Werror
all: build/gm.o build/func.o bin/circles
bin/circles: build/gm.o build/func.o
	$(CC) -lm build/func.o build/gm.o -o bin/circles
build/gm.o: gm.c
	$(CC) -lm $(CFLAGS) -c -o build/gm.o gm.c
build/func.o: func.c
	$(CC) -lm $(CFLAGS) -c -o build/func.o func.c
clean:
	rm build/func.o build/gm.o
bin/test:
	$(CC) -lm $(CFLAGS) -c -o build/test.o test/test1.c
	$(CC) -lm $(CFLAGS) -c -o build/functest.o func.c
	$(CC) -lm build/test.o build/functest.o -o bin/test
