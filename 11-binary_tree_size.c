#include "binary_trees.h"

/**
 * binary_tree_size- function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the size of the binary tree form the root
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size, tree_size;

	if (tree == NULL)
		return (0);

	else
	{
		left_size = binary_tree_size(tree->left);
		right_size = binary_tree_size(tree->right);
		tree_size = left_size + right_size + 1;
		return (tree_size);
	}
}
