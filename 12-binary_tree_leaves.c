#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer
 * Return: 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	s = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (s);
}
