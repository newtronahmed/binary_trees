#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree
 * Return: size_t
 * Added tree->left || tree->right because
 * we won't count leaf nodes.
 * else it's height + 1
 * We need only the edges /\.
 */
size_t max(size_t h_left, size_t h_right);
size_t max(size_t h_left, size_t h_right)
{
	if (h_left > h_right)
		return (h_left);
	return (h_right);
}
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		h_left = binary_tree_height(tree->left);
		h_right = binary_tree_height(tree->right);
		return max(h_left, h_right) + 1;
	}
	return(0);
}
