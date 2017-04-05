CC = gcc
CFLAGS = -g -Wall -Wextra
RM = rm -f

default: all

all: pointer
	./pointer

pointer: pointer.o
	$(CC) pointer.o -o pointer

pointer.o: pointer.c
	$(CC) $(CFLAGS) -c pointer.c

clean:
	rm *.o pointer ; rm -rf a.out a.out.dSYM

