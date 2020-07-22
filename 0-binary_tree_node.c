#include "binary_trees.h"
/**
 * binary_tree_node - function that creates binary tree node
 * @parent: pointer at parent node of the node created
 * @value: value to new node
 * Return:  pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nd;

	nd = malloc(sizeof(binary_tree_t));
	if (nd == NULL)
		return (NULL);

	nd->parent = parent;
	nd->n = value;
	nd->left = NULL;
	nd->right = NULL;

	return (nd);
}
