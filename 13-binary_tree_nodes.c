#include "binary_trees.h"
/**
 * binary_tree_nodes -  counts the nodes with at least 1 child
 * @tree: pointer to the root node to count the number of nodes
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leaves_l, leaves_r;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	leaves_l = binary_tree_nodes(tree->left);
	leaves_r = binary_tree_nodes(tree->right);

	return (leaves_l + leaves_r + 1);
}
