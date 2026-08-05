#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child
 * @parent: pointer to the parent node
 * @value: value to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	        binary_tree_t *node;

        if (parent == NULL)
                return (NULL);

        node = malloc(sizeof(*node));
        if (node == NULL)
                return (NULL);

        node->n = value;
        node->parent = parent;
        node->left = NULL;
        node->right = parent->right;

        if (node->right != NULL)
                node->right->parent = node;

        parent->right = node;

        return (node);
}
