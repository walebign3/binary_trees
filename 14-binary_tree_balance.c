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
        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);
        if (left_height >= right_height)
                return (left_height + 1);
        return (right_height + 1);
}
/**
 * binary_tree_balance - balance factor of a tree
 * @tree: Pointer to the root node
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance, right_balance;

	if (tree == NULL)
		return (0);
	left_balance = binary_tree_height(tree->left);
	right_balance = binary_tree_height(tree->right);
	return (left_balance - right_balance);
}

