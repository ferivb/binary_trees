#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Returns 1 if node is leaf or 0 if not
 *
 * @node: Node to analyse
 * Return: 1 if leaf 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}
	return (0);
}
