#include<stdio.h>
#include "tree_class.hh"
#include "string.h"
using namespace std;

int create_tree(int *);

int main()
{
    tree T;
    int *h; 
    printf("This is a test by rohit\n");
    int ret = create_tree(h);
    return 0;
}


int create_tree(int *head)
{

    FILE *fp;
    char c;
    char *buffer;
    int i;
    fp = fopen("tree_node_values", "r");
    fseek(fp, SEEK_SET, 0);
    i = 0;
    while(1){
	c = fgetc(fp);
	if(feof(fp)){
	    break;
	}
	if(c != '\n'){
	    buffer[i] = c;
	    i++;
	}
    }
    //fread(buffer, sizeof(char), 14, fp);
    printf("The read string is:\n");
    for(i = 0; i < 7; i++)
    {
	printf("%c\n", buffer[i]);
    }
    fclose(fp);
    return 0; 
}
