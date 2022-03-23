#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks wether a node is root
 *
 * @node: Node to analyse
 * Return: 1 if node is root 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}
