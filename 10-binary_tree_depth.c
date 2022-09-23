#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a node
 * @tree: Pointer to the root node
 *
 * Return: height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree != NULL && tree->parent == NULL)
		return (0);
	if (tree == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}

