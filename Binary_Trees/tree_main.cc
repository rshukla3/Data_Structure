#include<stdio.h>
#include "tree_class.hh"
#include "string.h"
#include "stdlib.h"
using namespace std;

int main(int argc, char *argv[])
{
    tree T;
    int *h = NULL; 
    node_t *n = NULL;
    int *buffer;
    int i;
    if(argc != 2){
	printf("usage: %s filename\n", argv[0]);
	return 0;
    }

/**********************************************************************
  * Read the values of the nodes (or keys) for the binary tree from the
  * file specified as command line argument.
***********************************************************************/
    
    //
    int node_count = T.read_node_values(&buffer, argv[1]);
    if(node_count == -1)
	printf("Mentioned filename does not exist\n");
    for(i = 0; i < node_count; i++)
    {
        printf("%d\n", buffer[i]);
    }

    //int ret=T.create_binary_tree(&n,&h,buffer,node_count);
    //printf("The value of ret is:%d\n", ret);

/***********************************************************************
  * Values read from the file should be saved in the nodes.
***********************************************************************/

    for(i = 0; i < node_count; i++){
	if(h == NULL){
	    printf("The value of h is currently NULL\n");

	    // Allocate memory space to the head pointer
	    h = (int *)malloc(sizeof(int));

	    T.insert_node((node_t *)h,&n,buffer[0]);	
	    h = (int *)n;
	    printf("Data stored in the very first node is: %d\n", n->data);
	}else{
	    n = (node_t *)h;
	    if(buffer[i] <= n->data){
		T.traverseLeft(&n, buffer[i], &n->left);
	    }else{
		T.traverseRight(&n,buffer[i], &n->right);
	    }

	}
    }

/************************************************************************
  * Search for a node in the binary tree.
************************************************************************/
    n = (node_t *)h;
    node_t *detected_node;
    int detected_depth = T.searchValue(n,1,&detected_node,0);

    printf("The value of detected_node is %p and depth of the found element is %d\n", detected_node, detected_depth);

/*************************************************************************
  * Do a preorder traversal of the binary tree.
*************************************************************************/

    node_t *root = (node_t *)h;
    int *preorderBuffer;
    int nodeCount = 0;
    preorderBuffer = (int *)malloc(sizeof(int));
    preorderBuffer[nodeCount] = root->data;
    nodeCount = T.preorder(root,&preorderBuffer,nodeCount);
    printf("The nodeCount received from preorder traversal is %d\n", nodeCount+1);
    for(i = 0; i<=nodeCount; i++){
	printf("The value of preorderBuffer[%d] is: %d\n", i, preorderBuffer[i]);
    }
    free(preorderBuffer);

/*************************************************************************
  * Perform an inorder search in the binary tree.
*************************************************************************/

    int *inorderBuffer;
    int inorderNodeCount = 0;
    inorderBuffer = (int *)malloc(nodeCount*sizeof(int));
    inorderNodeCount = T.inorder(root,&inorderBuffer,inorderNodeCount);
    printf("The nodeCount received from inorder traversal is %d\n", inorderNodeCount);
    for(i = 0; i<inorderNodeCount; i++){
	 printf("The value of preorderBuffer[%d] is: %d\n", i, inorderBuffer[i]);
    }
    free(inorderBuffer);
    return 0;
}
