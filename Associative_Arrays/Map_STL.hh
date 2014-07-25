#include<stdio.h>
#include<map>

#ifndef _MAP_STL_HH_
#define _MAP_STL_HH_
using namespace std;

template<class T, class T2>
class maps{
    public:
	int push_value(T &, T2 &);
};

#include"Map_STL.cc"

#endif

/*
template<class T, class T2>
int maps<T, T2>::push_value(T &a, T2 &b){
    if(a>b)
	printf("Value of a is greater than b\n");
    else
	printf("Value of b is greater than a\n");
    return 0;
}
*/
