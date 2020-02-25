all: gm

gm: gm.c
	gcc -Wall -Werror gm.c -lm -o gm
