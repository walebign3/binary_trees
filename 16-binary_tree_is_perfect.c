#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - in-order traversal
 * @tree: Pointer to the root node
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}
/**
 * binary_tree_is_perfect - full binary tree
 * @tree: Pointer to the root node
 *
 * Return: balance factor
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_balance, right_balance;

	if (tree == NULL)
		return (0);
	left_balance = binary_tree_height(tree->left);
	right_balance = binary_tree_height(tree->right);
	if ((left_balance - right_balance) == 0)
		return (1);
	return (0);
}

