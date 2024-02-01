#include "binary_trees.h"
/**
 * binary_tree_is_full- a function that checks if a binary tree is full.
 * @tree: a pointer to the root node of the tree to check.
 * Return: 0 if null and  if true
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (!(tree->left) || !(tree->right))
		return (0);

	return (left && right);
}
