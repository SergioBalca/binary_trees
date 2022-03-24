#include "binary_trees.h"

/**
 * binary_tree_depth- function that measures the depth of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the depth of the binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dist = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	if (tree->parent != NULL)
		dist = binary_tree_depth(tree->parent);

	return (dist + 1);

}
