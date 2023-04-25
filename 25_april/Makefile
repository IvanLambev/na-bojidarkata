CC=gcc
CFLAGS=-c -Wall
LDFLAGS=-lm

all: quadraticroots

quadraticroots: quadraticroots.o main.o
	$(CC) quadraticroots.o main.o -o quadraticroots $(LDFLAGS)

quadraticroots.o: quadraticroots.c quadraticroots.h
	$(CC) $(CFLAGS) quadraticroots.c

main.o: main.c quadraticroots.h
	$(CC) $(CFLAGS) main.c

clean:
	rm -f quadraticroots.o main.o quadraticroots
