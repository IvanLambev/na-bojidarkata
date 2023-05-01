all: processes.o taskmanager.exe

processes.o: processes.c
	gcc -c processes.c

taskmanager.exe: taskmanager.c
	gcc -o taskmanager.exe taskmanager.c processes.o

clean:
	rm -f *.o 