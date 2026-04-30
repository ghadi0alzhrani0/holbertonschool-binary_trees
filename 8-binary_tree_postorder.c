#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a tree using post-order
 * @tree: root of the tree
 * @func: function to use for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
