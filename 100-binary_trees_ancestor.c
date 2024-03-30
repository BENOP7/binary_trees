#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * in a binary tree
 * @node: node whose uncle have to be searched
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
			const binary_tree_t *second)
{
	binary_tree_t *current;
	binary_tree_t *parent1;
	binary_tree_t *parent2;

	if (first == NULL || second == NULL)
		return (NULL);

	current = second->parent;
	while (current)
	{
		if (first == current)
			return ((binary_tree_t *) first);
		current = current->parent;
	}
	current = first->parent;
	while (current)
	{
		if (second == first->parent)
			return ((binary_tree_t *) second);
		current = current->parent;
	}

	parent1 = first->parent;
	parent2 = second->parent;

	while (parent1)
	{
		while (parent2)
		{
			if (parent1 == parent2 && parent1 != NULL)
				return (parent1);
			parent2 = parent2->parent;
		}
		parent1 = parent1->parent;
	}

	return (NULL);
}
