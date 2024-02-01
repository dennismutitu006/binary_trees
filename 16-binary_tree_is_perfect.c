#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t x = 1;

	if (!tree)
		return (0);

	x += binary_tree_size(tree->left);
	x += binary_tree_size(tree->right);

	return (x);
}
/**
 *  binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	h_left = binary_tree_size(tree->left);
	h_right = binary_tree_size(tree->right);

	if ((h_left - h_right) == 0)
		return (1);

	return (0);
}
