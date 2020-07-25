#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int childs_l, childs_r;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL && tree->left == NULL)
		return (0);
	if (tree->right == NULL && tree->left != NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	childs_r = binary_tree_is_full(tree->right);
	childs_l = binary_tree_is_full(tree->left);
	if (childs_l == 0 || childs_r == 0)
		return (0);
	else
		return (1);
}
