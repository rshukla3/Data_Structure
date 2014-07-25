#include<stdio.h>
#include"Map_STL.hh"
using namespace std;

int main(){
    maps<int, int> m_int;
    maps<float, float> m_float;
    int a = 6;
    int b = 2;
    float A_f = 16.573;
    float B_f = 16.577;
    m_int.push_value(a,b);
    m_float.push_value(A_f, B_f);
    printf("Started working on associative arrays\n");
    return 0;
}
