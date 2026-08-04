#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 * @parent: pointer to the parent node
 * @value: value to store in the node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	/* Allouer un binary_tree_t */
	node = malloc(sizeof(*node));

	/* Vérifier si malloc a échoué */
	if (node == NULL)
	{
		return (NULL);
	}
	/* Initialiser n, parent, left et right */
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	/* Retourner node */
	return (node);
}
