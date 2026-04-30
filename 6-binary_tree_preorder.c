#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a tree using pre-order
 * @tree: root of the tree
 * @func: function to use for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
