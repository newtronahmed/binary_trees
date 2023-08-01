#include "binary_trees.h"
/**
 * binary_tree_t - function that creates a binary tree node
 *
 * @parent - pointer to parent node
 * @value - value
 *
 * Return: pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = NULL;

	ptr = malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->parent = parent;
	ptr->left = NULL;
	ptr->right = NULL;
	ptr->n = value;
	return (ptr);
}

