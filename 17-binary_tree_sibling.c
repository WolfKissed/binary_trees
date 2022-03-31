#include "binary_trees.h"
/**
*binary_tree_sibling - finds the sibling of a node
*@node: Pointer
*Return: 0
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
