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

/**
 * binary_tree_is_perfect- function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if binary tree is perfect or 0 if is not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_depth, r_depth;
	int left_tree, right_tree;

	if (tree == NULL)
		return (0);

	/**
	 * if leaf node, then its depth must be same as
	 * depth of all other leaves
	 */
	l_depth = binary_tree_depth(tree->left);
	r_depth = binary_tree_depth(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (l_depth != r_depth)
			return (0);
	}

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (l_depth == r_depth && (tree->left && tree->right))
		return (1);

	left_tree = binary_tree_is_perfect(tree->left);
	right_tree = binary_tree_is_perfect(tree->right);

	return (left_tree && right_tree);
}
