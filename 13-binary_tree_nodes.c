#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cnt;

	if (tree == NULL)
		return (0);
	cnt = count_nodes(tree);
	return (cnt);
}

/**
 * count_nodes - counts the nodes with at least 1 child in a
 * binary tree recursively
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child
 */
size_t count_nodes(const binary_tree_t *tree)
{
	size_t l_cnt;
	size_t r_cnt;
	size_t cnt;

	if (tree == NULL)
		return (0);
	l_cnt = count_nodes(tree->left);
	r_cnt = count_nodes(tree->right);
	cnt = l_cnt + r_cnt;
	if (tree->left != NULL || tree->right != NULL)
		return (cnt + 1);
	else
		return (cnt);
}
