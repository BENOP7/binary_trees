#include "binary_trees.h"


/**
 * binary_tree_node - creates a new node in the tree
 * @parent: the parent node of the node to be created
 * @value: the value to be assigned to the node
 *
 * Return: return a pointer to the new node otherwise return NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(*new));

	if (new == NULL)
	{
		return (NULL);
	}
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
