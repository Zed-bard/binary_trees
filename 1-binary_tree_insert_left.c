#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of
 * a given parent node
 * @parent: Pointer to the node to insert the left child in
 * @value: Value to store in the new node
 * Return: Pointer to the new node or NULL if parent is NULL or
 * memory allocation fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left =  NULL;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
