#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t cnt;

	if (tree == NULL)
		return (0);
	cnt = count_leaves(tree);
	return (cnt);
}

/**
 * count_leaves - counts the leaves in a binary tree recursively
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves
 */
size_t count_leaves(const binary_tree_t *tree)
{
	size_t l_cnt;
	size_t r_cnt;
	size_t cnt;

	if (tree == NULL)
		return (0);
	l_cnt = count_leaves(tree->left);
	r_cnt = count_leaves(tree->right);
	cnt = l_cnt + r_cnt;
	if (tree->left == NULL && tree->right == NULL)
		return (cnt + 1);
	else
		return (cnt);
}
