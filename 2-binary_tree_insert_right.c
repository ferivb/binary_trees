#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node right of the parent
 *
 * @parent: Parent node
 * @value: Value of the node
 * Return: Ptr to the new node or NULL if failed or if parent == NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node != NULL && parent != NULL)
	{
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = NULL;
		/* Check for a left child */
		if (parent->right == NULL)
			new_node->right = NULL;
		else
		{
			new_node->right = parent->right;
			new_node->right->parent = new_node;
		}
		parent->right = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
