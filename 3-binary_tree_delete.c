#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - delete nodes
 * @tree: Pointer to the root node
 *
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
}
