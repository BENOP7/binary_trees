#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = value;
	/*new->parent = malloc(sizeof(new->parent));
	if (!new->parent)
		return (NULL);
	new->parent = parent;
	new->left = malloc(sizeof(*(new->left)));
	if (!new->left)
		return (NULL);
	new->right = malloc(sizeof(*(new->right)));
		return (NULL);*/
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
