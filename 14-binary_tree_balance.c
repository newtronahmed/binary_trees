#include "binary_trees.h"
/**
 * Function to calculate the height of a binary tree
 */
int _binary_tree_height(const binary_tree_t *tree) {
    int left_height, right_height;

    if (tree == NULL)
        return -1;

    left_height = _binary_tree_height(tree->left);
    right_height = _binary_tree_height(tree->right);

    return (left_height > right_height) ? (left_height + 1) : (right_height + 1);
}

/**
 * Function to measure the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree) {
    int left_height;
    int right_height;

    if (tree == NULL)
        return 0;

    left_height = _binary_tree_height(tree->left);
    right_height = _binary_tree_height(tree->right);

    return left_height - right_height;
}
