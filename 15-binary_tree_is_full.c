#include "binary_trees.h"

/**
 * binary_tree_is_full- function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 1 if binary tree is full or 0 if is not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* if leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/**
	 * if both left and right are not NULL
	 * and left & right subtrees are full
	 */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

}
