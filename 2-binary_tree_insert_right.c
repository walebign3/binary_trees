#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node at right
 * @parent: Pointer to the parent node
 * @value: value
 *
 * Return: pointer to the new node, or Null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *result;

	if (parent == NULL)
		return(NULL);
	result = malloc(sizeof(binary_tree_t));
	if (result != NULL)
	{
		if (parent->right == NULL)
		{
			parent->right = result;
			result->parent = parent;
			result->right = NULL;
			result->left = NULL;
			result->n = value;
		}
		else
		{
			result->right = parent->right;
			parent->right->parent = result;
			result->parent = parent;
			result->left = NULL;
			result->n = value;
			parent->right = result;
		}
	}
	return (result);
}
