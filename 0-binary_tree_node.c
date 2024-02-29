#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: pointer to the new node or NULL
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = new_node->right = NULL;

	if (parent != NULL)
	{
		if (parent->left == NULL)
			parent->left = new_node;
		else
			parent->right = new_node;
	}

	return (new_node);
}
