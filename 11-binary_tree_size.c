#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_size - size of a node
 * @tree: Pointer to the root node
 *
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	if (tree != NULL && tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree == NULL)
		return (0);
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	return (size_left + size_right + 1);
}

