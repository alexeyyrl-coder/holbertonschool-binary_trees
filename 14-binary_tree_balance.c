#include "binary_trees.h"

/**
 * node_height - measures a subtree height using node count
 * @tree: pointer to the root of the subtree
 *
 * Return: height of the subtree
 */
static int node_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = node_height(tree->left);
	right_height = node_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);

	return (right_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root of the tree
 *
 * Return: balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (node_height(tree->left) - node_height(tree->right));
}
