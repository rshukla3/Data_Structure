#include<stdio.h>
#include "tree_class.cc"
#include "string.h"
#include "stdlib.h"
using namespace std;

int main(int argc, char *argv[])
{
    tree T;
    int *h; 
    int *buffer;
    int i;
    if(argc != 2){
	printf("usage: %s filename\n", argv[0]);
	return 0;
    }

    int node_count = T.read_node_values(&buffer, argv[1]);
    if(node_count == -1)
	printf("Mentioned filename does not exist\n");
    for(i = 0; i < node_count; i++)
    {
        printf("%d\n", buffer[i]);
    }
    return 0;
}
