#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - in-order traversal
 * @tree: Pointer to the root node
 * @func: pointer to void function
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	func(tree->n);
}

