#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the
 * depth of a node in a binary tree.
 *
 * @tree: Pointer to the node to measure the depth.
 * Return: Depth of a node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	size_t parent = binary_tree_depth(tree->parent);

	return (parent + 1);
}
