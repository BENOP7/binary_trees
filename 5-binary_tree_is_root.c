#include "binary_trees.h"

int binary_tree_is_root(binary_tree_t *node)
{
	if (node)
	{
		if (node->parent == NULL)
			return 1;
	}
	return 0;
}
