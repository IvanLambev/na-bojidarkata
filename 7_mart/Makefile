CC=gcc
CFLAGS=-Wall

all: help.out strlength.out strconcat.out strcompare.out

help.out: help.c
	$(CC) $(CFLAGS) -o help.out help.c

strlength.o: strlength.c mystrings.h
	$(CC) $(CFLAGS) -c strlength.c

strlength.out: strlength.o mystrings.o
	$(CC) $(CFLAGS) -o strlength.out strlength.o mystrings.o

strconcat.o: strconcat.c mystrings.h
	$(CC) $(CFLAGS) -c strconcat.c

strconcat.out: strconcat.o mystrings.o
	$(CC) $(CFLAGS) -o strconcat.out strconcat.o mystrings.o

strcompare.o: strcompare.c mystrings.h
	$(CC) $(CFLAGS) -c strcompare.c

strcompare.out: strcompare.o mystrings.o
	$(CC) $(CFLAGS) -o strcompare.out strcompare.o mystrings.o

mystrings.o: mystrings.c mystrings.h
	$(CC) $(CFLAGS) -c mystrings.c

clean:
	rm -f *.o *.out

.PHONY: clean
