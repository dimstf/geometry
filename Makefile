.PHONY: clean
CC=gcc
CFLAGS=-Wall -Werror
all: build/gm.o build/func.o bin/circles
bin/circles: build/gm.o build/func.o
	$(CC) -lm build/func.o build/gm.o -o bin/circles
build/gm.o: gm.c
	$(CC) $(CFLAGS) -c -o build/gm.o gm.c
build/func.o: func.c
	$(CC) -lm $(CFLAGS) -c -o build/func.o func.c
clean:
	rm build/func.o build/gm.o
