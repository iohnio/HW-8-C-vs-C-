all: main

main: main.o matrix.o
	gcc -std=c99 -o main main.o matrix.o

main.o: main.c matrix.h
	gcc -std=c99 -c main.c

matrix.o: matrix.c matrix.h
	gcc -std=c99 -c matrix.c

clean:
	rm -f *.o main
