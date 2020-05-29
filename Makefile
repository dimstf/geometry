.PHONY: clean test
CC=gcc
CFLAGS=-std=c99 -Wall -Wextra -Werror -c -o
all: bin/circles
bin/circles: build/gm.o build/func.o
	$(CC) build/func.o -lm build/gm.o -o bin/circles
build/gm.o: gm.c
	$(CC) $(CFLAGS) build/gm.o -lm gm.c
build/func.o: func.c
	$(CC) $(CFLAGS) build/func.o -lm func.c
clean:
	rm build/func.o build/gm.o build/test.o build/functest.o
test: bin/test
bin/test: build/test.o build/functest.o	
	$(CC) -lm build/test.o build/functest.o -lm -o bin/test
build/functest.o: func.c
	$(CC) $(CFLAGS) build/functest.o -lm func.c
build/test.o: test/test1.c
	$(CC) $(CFLAGS) build/test.o -lm test/test1.c

