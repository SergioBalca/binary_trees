#include "binary_trees.h"

/**
 * binary_tree_is_perfect- function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if the binary tree is perfect, 0 otherwhise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int p;
	size_t d;

	d = binary_tree_depth(tree);
	p = is_perfect(tree, d, 0);
	return (p);

}

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

/**
 * is_perfect- function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * @d: depth of binary tree
 * @level: level of node
 * Return: the depth of the binary tree
 */

int is_perfect(const binary_tree_t *tree, size_t d, int level)
{
	int left, right;

	if (tree == NULL)
		return (0);

	/* check the presence of children */
	if (tree->left == NULL && tree->right == NULL)
		return (d = level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left = is_perfect(tree->left, d, level + 1);
	right = is_perfect(tree->right, d, level + 1);

	return (left && right);
}
