#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child
 * @value: value to store in the new node
 * Return:  pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nd;

	if (parent == NULL)
		return (NULL);

	nd = binary_tree_node(parent, value);
	if (nd == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		nd->right = parent->right;
		parent->right->parent = nd;
	}
	parent->right  = nd;

	return (nd);
}
