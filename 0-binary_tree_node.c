#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - fun creates binary tree
 * @parent: Pointer to the parent node
 * @value: value
 *
 * Return: pointer to the new node, or Null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t* result;

	result = malloc(sizeof(binary_tree_t));
	if (result != NULL)
	{
		result->parent = parent;
		result->left = NULL;
		result->right = NULL;
		result->n = value;
	}
	return (result);
}
