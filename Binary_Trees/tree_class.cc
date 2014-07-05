#include<stdio.h>
#include"tree_class.hh"
#include"stdlib.h"
using namespace std;
int tree::read_node_values(int **ret_buffer, const char *filename)
{
 
     FILE *fp;
     char c;
     int *buffer;
     int i;
     int node_count;
     fp = fopen(filename, "r");
     if(fp == NULL){
         return -1;
     }
     fseek(fp, SEEK_SET, 0);
 
     buffer = (int *)malloc(sizeof(int));
 
     i = 0;
     while(1){
         c = fgetc(fp);
         if(feof(fp)){
             break;
         }
         if(c != '\n'){
             buffer[i] = c-'0';
             i++;
             buffer = (int *)realloc(buffer, (i+1)*sizeof(int));
         }
      }
      buffer[i] = -1;
      node_count = i;
      *ret_buffer = buffer;
      fclose(fp);
      return node_count;
}

