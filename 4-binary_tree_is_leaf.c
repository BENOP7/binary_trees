#include "binary_trees.h"

int binary_tree_is_leaf(binary_tree_t *node)
{
	if (node)
	{
		if (node->left == NULL && node->right == NULL)
			return 1;
	}
	return 0;
}
