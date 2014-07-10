traversal: tree_main.o tree_class.o
	g++ -o traversal tree_main.o tree_class.o -lm

tree_class.o: tree_class.cc
	g++ -c -O -Wall tree_class.cc

tree_main.o: tree_main.cc
	g++ -c -O -Wall tree_main.cc

clean:
	rm -rf tree_main.o tree_class.o traversal
