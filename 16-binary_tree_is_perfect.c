#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, else if tree is NULL or is not perfect 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h8;
	int size;
	int perfect_num;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);
	h8 = measure_height(tree);
	size = measure_size(tree);
	perfect_num = fpow(2, h8) - 1;
	if (size == perfect_num)
		return (1);
	else
		return (0);
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

/**
 * measure_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to be measured
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

/**
 * fpow - calculates x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: x raised to power of y or -1 if y < 0
 */
int fpow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * fpow(x, y - 1));
}
