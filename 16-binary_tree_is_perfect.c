#include "binary_trees.h"

/**
 * leaf_depth - measures the depth of the leftmost leaf
 * @tree: pointer to the root of the tree
 *
 * Return: depth of the leftmost leaf
 */
static size_t leaf_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	while (tree->left != NULL)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}

/**
 * check_perfect - checks if a tree is perfect
 * @tree: pointer to the current node
 * @depth: expected depth of every leaf
 * @level: depth of the current node
 *
 * Return: 1 if perfect, otherwise 0
 */
static int check_perfect(const binary_tree_t *tree,
	size_t depth, size_t level)
{
	if (tree->left == NULL && tree->right == NULL)
		return (level == depth);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (check_perfect(tree->left, depth, level + 1) &&
		check_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root of the tree
 *
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = leaf_depth(tree);

	return (check_perfect(tree, depth, 0));
}
