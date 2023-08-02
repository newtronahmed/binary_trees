#include "binary_trees.h"
#include <stdio.h>
int max(int, int);
int max(int h_left, int h_right)
{
	if (h_left > h_right)
		return (h_left);
	return (h_right);
}
int check_binary_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
	{
		int h_left, h_right = 0;

		h_left = check_binary_is_full(tree->left);
		if (h_left == -1)
			return (-1);
		h_right = check_binary_is_full(tree->right);
		if (h_right == -1)
			return (-1);

		if (abs(h_left - h_right) > 1)
		{
			return (-1);
		}
		return (max(h_left, h_right) + 1);
	}
	return (0);
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree : tree
 * Return: int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int result;

	result = check_binary_is_full(tree);
	printf("%d result\n", result);
	if (result > 0)
	{
		return (1);
	}
	return (0);
}
