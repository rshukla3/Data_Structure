#include"node_struct.hh"
class tree {
    public:
	int read_node_values(int **, const char *);
	int create_binary_tree(node_t **, int **, int *, int);
	int insert_node(node_t *, node_t **, int);
	int traverseLeft(node_t **, int, node_t **);
	int traverseRight(node_t **, int, node_t **);
	int searchValue(node_t *, int, node_t **, int);
	int preorder(node_t *, int **, int);
	int inorder(node_t *, int **, int);
};
