#include "binary_trees.h"
/**
 * binary_tree_delete- a function that deletes the entire binary tree.
 * @tree: a pointer to the root node of the tree to delete.
 * Description: if tree is null return nother
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
