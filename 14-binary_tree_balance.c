#include "binary_trees.h"

/**
 * tree_height - Calculates the height of a tree
 * @root: pointer to the root node of the tree
 * Return: the height of the tree or 0
*/

int tree_height(binary_tree_t *root)
{
	if (root == NULL)
		return (-1);

	if (root->left == NULL && root->right == NULL)
		return (0);

	return (1 + max(tree_height(root->left), tree_height(root->right)));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor of tree or 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return (left_height - right_height);
}
