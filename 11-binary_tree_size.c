#include "binary_trees.h"

/**
 * binary_tree_size - returns the size of the binary tree
 * @tree: root node of the tree
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_n;
	size_t right_n;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	left_n = binary_tree_size(tree->left);
	right_n = binary_tree_size(tree->right);

	return (1 + left_n + right_n);
}
