#include<map>
#include"Map_STL.hh"
using namespace std;


template<class T, class T2>
int maps<T, T2>::push_value(T &a, T2 &b, map <T, T2> &m){
    /*
    if(a>b)
	printf("Value of a is greater than b\n");
    else
	printf("Value of b is greater than a\n");
    */
    m[a] = b;
    return 0;
}

