CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
LDFLAGS = -lm

.PHONY: all clean

all: safeadd safesubtract safemultiply safedivide

safeint.o: safeint.c safeint.h
	$(CC) $(CFLAGS) -c $< -o $@

safeadd: safeadd.c safeint.o
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

safesubtract: safesubtract.c safeint.o
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

safemultiply: safemultiply.c safeint.o
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

safedivide: safedivide.c safeint.o
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

clean:
	rm -f safeint.o safeadd safesubtract safemultiply safedivide
