#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* import C libraries */
#include <stddef.h>
#include <stdlib.h>
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
/* checks if a node is a leaf prototype */
int binary_tree_is_leaf(const binary_tree_t *node);
/* checks if a node is a root prototype */
int binary_tree_is_root(const binary_tree_t *node);
/* pre-order traversal in binary tree prototype */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/* In-order binary tree traversal prototype */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* Post-order binary traversal prototype */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* Binary tree height measurement prototype */
size_t binary_tree_height(const binary_tree_t *tree);
/* Depth of a node in binary tree prototype */
size_t binary_tree_depth(const binary_tree_t *tree);
/* binary tree size prototype */
size_t binary_tree_size(const binary_tree_t *tree);
/* Leaves count in binary tree prototype */
size_t binary_tree_leaves(const binary_tree_t *tree);
/* nodes count with atleast 1 child prototype */
size_t binary_tree_nodes(const binary_tree_t *tree);
/* Binary tree balance factor prototype */
int binary_tree_balance(const binary_tree_t *tree);
/* Checks if the binary tree is full prototype */
int binary_tree_is_full(const binary_tree_t *tree);
/* Checks if the binary tree is perfect prototype */
int binary_tree_is_perfect(const binary_tree_t *tree);
/* Find sibling of a node prototype. */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/* print binary tree prototype */
void binary_tree_print(const binary_tree_t *);
#endif /* BINARY_TREES_H */

