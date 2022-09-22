#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - delete nodes
 * @tree: Pointer to the root node
 *
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tmp1, *tmp2, *tmp3, *tmp4;

	tmp1 = tree->left;
	tmp3 = tree->right;
	if (tree == NULL)
		(void)0;
	else
	{
		while (tmp1 != NULL)
		{
			tmp2 = tmp1;
			tmp1 = tmp1->left;
			free(tmp2);
			tmp2 = tmp1;
		}
		while (tmp3 != NULL)
		{
			tmp4 = tmp3;
			tmp3 = tmp3->right;
			free(tmp4);
			tmp4 = tmp3;
		}
		free(tree);
	}
}
