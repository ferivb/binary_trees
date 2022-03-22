#include "binary_trees.h"

/**
 * binary_tree_node - Creates a node for a bin tree
 *
 * @parent: Parent of the node to create
 * @value: Value to store in the node
 * Return: Pointer to the newly created node or NULL in failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node != NULL)
	{
		new_node->parent = parent;
		new_node->n = value;
		new_node->right = NULL;
		new_node->left = NULL;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
