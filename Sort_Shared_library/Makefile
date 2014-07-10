sort: Sort_STL.o Sort_main.o
	g++ -o sort Sort_main.o Sort_STL.o -lm

Sort_STL.o: Sort_STL.cc
	g++ -c -O -Wall Sort_STL.cc

Sort_main.o: Sort_main.cc
	g++ -c -O -Wall Sort_main.cc

clean:
	rm -rf Sort_main.o Sort_STL.o sort
