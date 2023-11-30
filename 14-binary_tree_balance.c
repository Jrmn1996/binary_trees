#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor, If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;
	size_t l_h8;
	size_t r_h8;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	l_h8 = measure_height(tree->left);
	r_h8 = measure_height(tree->right);
	balance = l_h8 - r_h8;
	return (balance);
}

/**
 * measure_height - measures height of a binary tree recursively
 * @tree: pointer to the root of the tree to measure
 * Return: height
 */
size_t measure_height(const binary_tree_t *tree)
{
	size_t l_h8;
	size_t r_h8;

	if (tree == NULL)
		return (0);
	l_h8 = measure_height(tree->left);
	r_h8 = measure_height(tree->right);
	if (l_h8 > r_h8)
		return (l_h8 + 1);
	else
		return (r_h8 + 1);
}
