#include "binary_trees.h"
/**
 * binary_tree_is_root -a function that checks if a given node is a root
 * @node: a pointer to the node to check.
 * Return: 1  if node else 0 or 0 if null.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node && !node->parent)
		return (1);
	else
		return (0);
}
