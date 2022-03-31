#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_h, right_h = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h >= right_h)
		return (left_h + 1);
	return (right_h + 1);
}
