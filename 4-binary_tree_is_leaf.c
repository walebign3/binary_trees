#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: Pointer to the node
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
