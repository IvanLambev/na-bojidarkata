
all: quadraticroots

quadraticroots: quadraticroots.o main.o
	gcc -lm quadraticroots.o main.o -o quadraticroots

quadraticroots.o: quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c

main.o: main.c quadraticroots.h
	gcc -c main.c

clean:
	rm -f quadraticroots.o main.o quadraticroots
