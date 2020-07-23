#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent:  pointer to the node to insert the left-child
 * @value:  value to store in the new node
 * Return: a pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nd;

	if (parent == NULL)
		return (NULL);

	nd = binary_tree_node(parent, value);
	if (nd == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		nd->left = parent->left;
		parent->left->parent = nd;
	}
	parent->left = nd;

	return (nd);
}
