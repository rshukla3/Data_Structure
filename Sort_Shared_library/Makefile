sort: libsort.so Sort_main.cc
	g++  -o sort Sort_main.cc -Wall -lsort -L.

libsort.so: Sort_STL.o
	g++ -shared -o libsort.so Sort_STL.o

Sort_STL.o: Sort_STL.cc
	g++ -c -g -fpic Sort_STL.cc -Wall

clean:
	rm -rf libsort.so Sort_STL.o sort
