#include "binary_trees.h"

/**
 * count_leaves - counts the number of leaves in binary tree
 * @tree: root node of the tree
 * @leave_count: number of leaves
 * Return: the number of leaves in the tree
 *
 */
size_t count_leaves(const binary_tree_t *tree, size_t leave_count)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (count_leaves(tree->left, leave_count) +
	count_leaves(tree->right, leave_count));
}

/**
 * binary_tree_leaves - returns the number of leaves of the binary tree
 * @tree: root node of the tree
 * Return: the number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	return (count_leaves(tree, count));
}
