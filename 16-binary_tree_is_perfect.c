#include "binary_trees.h"
/**
 * binary_tree_height - measure hegiht of binary tree
 *
 * @tree: tree
 *
 * Return: int
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right = 0;

	if (!tree)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	return (1 + (h_left > h_right ? h_left : h_right));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h_left, h_right = 0;

	if (tree)
	{
		h_left = binary_tree_height(tree->left);
		h_right = binary_tree_height(tree->right);
		if (h_left != h_right)
			return (0);
		if (!tree->left && !tree->right)
		{
			return (1);
		}

		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}
	return (0);

}
