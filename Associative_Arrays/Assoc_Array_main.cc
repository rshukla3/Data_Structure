#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<limits>

#include"Map_STL.hh"

#define MAX_KEY_VAL 10
#define DATA_RANGE 1000
using namespace std;

int main(){
    map<int, int> m;
    maps<int, int> m_int;
    int a;
    int b;
    int i;

    for(i = 0; i<MAX_KEY_VAL; ++i){
	a=rand()%DATA_RANGE+100;
	b=rand()%DATA_RANGE+a;
	m_int.push_value(a,b,m);
    }

    map<int, int>::reverse_iterator it;
    
    for(it=m.rbegin(); it!=m.rend();++it){
	printf("Started working on associative arrays m[%d]=%d\n",it->first,it->second);
    }
    i = numeric_limits<int>::max();
    cout<<"The maximum value of integer is:"<<numeric_limits<int>::max()<<endl;
    cout<<"The minimum value of integer is:"<<numeric_limits<int>::min()<<endl;

    cout<<"The integer division value is:"<<i/10<<endl;
    return 0;
}
