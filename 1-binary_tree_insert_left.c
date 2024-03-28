#include "binary_trees.h"


/**
 * binary_tree_insert_left - creates a new node and inserts it as the left
 * child of the parent node passed as argument
 * @parent: the parent node of the node to be created
 * @value: the value to be assigned to the node
 *
 * Return: a pointer to the new node otherwise return NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	binary_tree_t *tmp = NULL;

	if (parent)
	{
		tmp = parent->left;
		new = binary_tree_node(parent, value);
		if (tmp)
			tmp->parent = new;
		new->left = tmp;
		parent->left = new;

	}

	return (new);
}
