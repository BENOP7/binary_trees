#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a tree in preorder manner
 * @tree: the tree
 * @func: a pointer to the function that does action on each traversed node
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
