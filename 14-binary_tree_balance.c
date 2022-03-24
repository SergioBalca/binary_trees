#include "binary_trees.h"

/**
 * binary_tree_height- function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the size of the binary tree form the root
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	else
	{
		/* find the height of each subtree */
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		/* use the larger one */
		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}

}


/**
 * binary_tree_balance- function that measures the balance factor
 *  of a binary tree
 * @tree: is a pointer to the root node of the binary tree
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	int balance_factor = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	else
		left_height = 0;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;
	else
		right_height = 0;

	balance_factor = left_height - right_height;

	return (balance_factor);

}
