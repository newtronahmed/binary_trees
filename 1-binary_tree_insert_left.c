#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 *
 * @parent - parent node
 * @value - integer value
 *
 * Return: pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr, *cur;

	if (parent == NULL)
		return (NULL);
	ptr = malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
		return (NULL);
	ptr->left = NULL;
	ptr->right = NULL;
	ptr->n = value;

	if (parent->left == NULL)
	{
		ptr->parent = parent;
		parent->left = ptr;

	}
	else
	{
		cur = parent->left;
		ptr->left = cur;
		ptr->parent = parent;
		parent->left = ptr;
		cur->parent = ptr;
	}
	return (ptr);
}

