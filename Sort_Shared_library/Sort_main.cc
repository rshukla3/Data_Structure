#include<stdio.h>
#include<vector>
#include<string>
#include<cstring>
#include"Sort_STL.hh"
#include"stdlib.h"
using namespace std;
int main(int argc, char *argv[]){
    SORT s;
    string commandline;
    int i;
    int random_seed;
    int array_size;
    if(argc <5){
	printf("Correct format of the executable is %s --seed SeedValue --ArraySize Size of the array to be sorted\n",argv[0]);
	return 0;
    }else{
	for(i = 1; i < argc; ++i){
	    if(string(argv[i]) == "--seed"){
		i++;
		random_seed = atoi(argv[i]);
	    }else if(string(argv[i]) == "--ArraySize"){
		i++;
		array_size = atoi(argv[i]);
	    }
	}
    }

    //int p[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> v;
    v.reserve(array_size);
    srand(random_seed);
    //v.assign(p,p+10);
    for(i = 0; i < array_size; ++i){
	v.push_back(rand()%100);        // The generated random numbers will be between o and 99.
    }
    printf("The value of v.size() is :%d\n", v.size());

    printf("Testing the C++ code\n");
    s.quicksort(v);


/*******************************************************************************
 * Scratchpad: Testing the string class of C++
 ******************************************************************************/
    string str = "123456789";
    const char *c = new char[str.length()+1];
    c = str.c_str();
    int a = c[0]-'0';
    int p[str.length()];
    unsigned int j;
    for(j = 0; j < str.length(); ++j){
	p[j] = c[j]-'0';
	printf("%d\n", p[j]);
    }
    string str2 = "32451";
    int d = atoi(str2.c_str());
    printf("The value of c[0] is: %d %d\n", a, d);
    return 0;
}
