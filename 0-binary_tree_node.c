#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create a new node in the binary tree
 * @parent: the parent node of the new node
 * @value: the value of the node
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
