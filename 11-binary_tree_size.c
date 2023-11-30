#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t cnt;

	if (tree == NULL)
		return (0);
	cnt = measure_size(tree);
	return (cnt);
}

/**
 * measure_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of tree
 */
size_t measure_size(const binary_tree_t *tree)
{
	size_t l_cnt;
	size_t r_cnt;
	size_t cnt;

	if (tree == NULL)
		return (0);
	l_cnt = measure_size(tree->left);
	r_cnt = measure_size(tree->right);
	cnt = l_cnt + r_cnt;
	return (cnt + 1);
}
