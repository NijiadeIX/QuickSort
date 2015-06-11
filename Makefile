all:quickSort.o test.o
	g++ -o test.exe quickSort.o test.o

quickSort.o:quickSort.cpp
	g++ -g -c quickSort.cpp

test.o:test.cpp
	g++ -g -c test.cpp

clean:
	rm *.o
