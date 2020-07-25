#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node to measure the balance
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (tree->right == NULL)
		r = 0;
	else
		r = 1 + (int) binary_tree_height(tree->right);
	if (tree->left == NULL)
		l = 0;
	else
		l = 1 + (int) binary_tree_height(tree->left);

	return (l - r);
}
