#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree in in-order
 * @tree: pointer to the root of the tree
 * @func: function to call for each node
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
