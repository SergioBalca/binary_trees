#include "binary_trees.h"

/**
 * binary_tree_nodes- function that counts the number of nodes
 * whith at least a child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the number of nodes with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;
	size_t left_tree, right_tree;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		count += 1;
	}

	left_tree = binary_tree_nodes(tree->left);
	right_tree = binary_tree_nodes(tree->right);
	count += left_tree + right_tree;

	return (count);

}
