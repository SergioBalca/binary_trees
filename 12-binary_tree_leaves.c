#include "binary_trees.h"

/**
 * binary_tree_leaves- function that counts the number of leaves
 * in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the number of leaves of the binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves, tree_leaves;

	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	tree_leaves = left_leaves + right_leaves;

	return (tree_leaves);

}
