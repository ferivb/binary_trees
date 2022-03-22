#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node left of the parent
 *
 * @parent: Parent node
 * @value: Value of the node
 * Return: Ptr to the new node or NULL if failed or if parent == NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node != NULL && parent != NULL)
	{
		new_node->parent = parent;
		new_node->n = value;
		new_node->right = NULL;
		/* Check for a left child */
		if (parent->left == NULL)
			new_node->left = NULL;
		else
		{
			new_node->left = parent->left;
			new_node->left->parent = new_node;
		}
		parent->left = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
