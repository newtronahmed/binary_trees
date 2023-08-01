#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right-child of another node
 * @parent - parent node
 * @value - int vlaue
 * Return: pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right == NULL)
	{
		ptr->parent = parent;
		parent->right = ptr;
	}
	else
	{
		cur = parent->right;
		ptr->right = cur;
		ptr->parent = parent;
		parent->right = ptr;
		cur->parent = ptr;
	}
	return (ptr);
}
