#include "binary_trees.h"

/**
 * tree_height - calculates height of a tree
 * @tree: pointer to the root node of the tree
 * Return: the height of the tree or 0
*/

size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return (max(left_height, right_height) + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect or 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	if (tree->left != NULL && tree->right != NULL)
	{
		if (left_height == right_height)
		{
			if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
				return (1);
		}
	}
	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (0);
}
