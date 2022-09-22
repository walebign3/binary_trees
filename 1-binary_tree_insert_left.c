#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node at lest
 * @parent: Pointer to the parent node
 * @value: value
 *
 * Return: pointer to the new node, or Null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *result;

	if (parent == NULL)
		return(NULL);
	result = malloc(sizeof(binary_tree_t));
	if (result != NULL)
	{
		if (parent->left == NULL)
		{
			parent->left = result;
			result->parent = parent;
			result->left = NULL;
			result->right = NULL;
			result->n = value;
		}
		else
		{
                        result->left = parent->left;
			parent->left->parent = result;
                        result->parent = parent;
                        result->right = NULL;
                        result->n = value;
			parent->left = result;
		}
	}
	return (result);
}
