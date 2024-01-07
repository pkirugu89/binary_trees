#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/**
 * struct binary_tree_s - Binary tree node.
 *
 * @n: Integer stored in the node.
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node.
 * @right: Pointer to the right child node.
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Function Prototypes */
/* Create a binary tree node prototype */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* inserts a node as the left-child of another node prototype */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* inserts a node as the right-child of another node prototype */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* delete an entire binary tree prototype */
void binary_tree_delete(binary_tree_t *tree);
/* print binary tree prototype */
void binary_tree_print(const binary_tree_t *);
#endif /* BINARY_TREES_H */

