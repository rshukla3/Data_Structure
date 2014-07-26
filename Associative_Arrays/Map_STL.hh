#include<map>

#ifndef _MAP_STL_HH_
#define _MAP_STL_HH_
using namespace std;

template<class T, class T2>
class maps{
    public:
	int push_value(T &, T2 &, map<T, T2> &);
};

#include"Map_STL.cc"

#endif
