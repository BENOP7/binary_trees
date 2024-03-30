#include "binary_trees.h"

/**
 * count_nodes - counts the number of nodes in binary tree
 * @tree: root node of the tree
 * @node_count: number of nodes
 * Return: the number of nodes in the tree
 *
 */
size_t count_nodes(const binary_tree_t *tree, size_t node_count)
{
	size_t count = node_count;

	if (tree == NULL)
		return (0);

	node_count = node_count + count_nodes(tree->left, count);
	node_count = node_count + count_nodes(tree->right, count);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + node_count);
	return (node_count);
}

/**
 * binary_tree_nodes - returns the number of nodes of the binary tree
 * @tree: root node of the tree
 * Return: the number of nodes in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	return (count_nodes(tree, count));
}
