#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: measures the height of a binary tree
 * Return: If tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	if (height_l > height_r)
		return (height_l + 1);
	else
		return (height_r + 1);
}
