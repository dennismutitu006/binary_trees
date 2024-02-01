#include "binary_trees.h"
/**
 * binary_tree_height - function measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: if tree is null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hr = 0, hl = 0;

	if (!tree)
		return (0);
/*+1 is added when recursively calculating height of btree*/
	if (tree->left)
		hl = 1 + binary_tree_height(tree->left);
	if (tree->right)
		hr = 1 + binary_tree_height(tree->right);

	if (hr > hl)
		return (hr);
	return (hl);
}
