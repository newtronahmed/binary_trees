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
	binary_tree_t *ptr;

	if (parent == NULL)
		return (NULL);
	ptr = malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
		return (NULL);
	ptr->parent = parent;
	ptr->left = NULL;
	ptr->right = NULL;
	ptr->n = value;

	parent->left = ptr;
	return (ptr);
}

