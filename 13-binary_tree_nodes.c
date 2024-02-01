#include "binary_trees.h"
/**
 * binary_tree_nodes- a function that counts the nodes with at least
 * child in a b-tree.
 * @tree: a pointer to the root node of the tree to count the no. of nodes.
 * Return: 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		node_count = 1;

	node_count += binary_tree_nodes(tree->left);
	node_count += binary_tree_nodes(tree->right);

	return (node_count);
}
