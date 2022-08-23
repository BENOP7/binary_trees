#include "binary_trees.h"

/**
 * binary_tree_height - returns the height of the binary tree
 * @tree: root node of the tree
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	left_h = 1 + binary_tree_height(tree->left);
	right_h = 1 + binary_tree_height(tree->right);

	return (left_h > right_h ? left_h : right_h);
}
