#include<stdio.h>
#include<vector>
#include"Sort_STL.hh"
using namespace std;

int SORT::quicksort(vector<int> &v){
    unsigned int i;
    unsigned int vector_size = v.size();
    for(i = 0; i<vector_size; ++i){
	printf("v[%d]: %d\n", i, v[i]);
    }
    return 0;
}
