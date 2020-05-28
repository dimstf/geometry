.PHONY: clean test test_clean
CC=gcc
CFLAGS=-Wall -Werror
all: bin/circles
bin/circles: build/gm.o build/func.o
	$(CC) -lm build/func.o build/gm.o -o bin/circles
build/gm.o: gm.c
	$(CC) -lm $(CFLAGS) -c -o build/gm.o gm.c
build/func.o: func.c
	$(CC) -lm $(CFLAGS) -c -o build/func.o func.c
clean:
	rm build/func.o build/gm.o
test: bin/test
bin/test: build/test.o build/functest.o	
	$(CC) -lm build/test.o build/functest.o -o bin/test
build/functest.o: func.c
	$(CC) -lm $(CFLAGS) -c -o build/functest.o func.c
build/test.o: test/test1.c
	$(CC) -lm $(CFLAGS) -c -o build/test.o test/test1.c
test_clean:
	rm build/test.o build/functest.o

