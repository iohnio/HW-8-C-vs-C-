all: main

main: main.o matrix.o
	g++ -std=c++11 -o main main.o matrix.o

main.o: main.cpp matrix.h
	g++ -std=c++11 -c main.cpp

Matrix.o: matrix.cpp matrix.h
	g++ -std=c++11 -c matrix.cpp

clean:
	rm -f *.o main
