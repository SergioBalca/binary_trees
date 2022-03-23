#include "binary_trees.h"

/**
 * binary_tree_is_root- function that checks if a node is a root
 * @node: pointer to the node to check
 * Return: 1 if the node is a root, or 0 if the node is note a root
 * or if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);

}
