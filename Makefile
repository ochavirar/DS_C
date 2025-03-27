all: compile link clean

compile:
	gcc -c main.c

link:
	gcc -o main main.o

clean:
	rm -r *.o
