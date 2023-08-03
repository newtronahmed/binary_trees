#include "binary_trees.h"
/**
 * binary_tree_height - measure tree height
 * @tree: tree
 * Return: int
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - balance factor or tree
 *
 * @tree: tree
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
