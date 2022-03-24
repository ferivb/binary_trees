#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree.
 *
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: Size of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
		size_t l_height = binary_tree_height(tree->left);
		size_t r_height = binary_tree_height(tree->right);

		if (l_height > r_height)
			return (l_height + 1);
		else
			return (r_height + 1);
	}
}
