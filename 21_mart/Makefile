CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99
LDFLAGS = -lm

all: safeint.o safeadd safesubtract safemultiply safedivide

safeint.o: safeint.c safeint.h
    $(CC) $(CFLAGS) -c safeint.c

safeadd: safeadd.c safeint.o util.o
    $(CC) $(CFLAGS) -o safeadd safeadd.c safeint.o util.o $(LDFLAGS)

safesubtract: safesubtract.c safeint.o util.o
    $(CC) $(CFLAGS) -o safesubtract safesubtract.c safeint.o util.o $(LDFLAGS)

safemultiply: safemultiply.c safeint.o util.o
    $(CC) $(CFLAGS) -o safemultiply safemultiply.c safeint.o util.o $(LDFLAGS)

safedivide: safedivide.c safeint.o util.o
    $(CC) $(CFLAGS) -o safedivide safedivide.c safeint.o util.o $(LDFLAGS)

util.o: util.c util.h
    $(CC) $(CFLAGS) -c util.c

clean:
    rm -f safeadd safesubtract safemultiply safedivide *.o
