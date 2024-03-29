#include "binary_trees.h"
/**
 * binary_tree_leaves- function counts the leaves in a btree
 * @tree: a pointer to the root node of the tree to count the no. of nodes
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
