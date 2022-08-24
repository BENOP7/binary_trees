#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a tree in postorder manner
 * @tree: the tree
 * @func: a pointer to the function that does action on each traversed node
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
