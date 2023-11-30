#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: if tree is NULL, your function must return 0 else the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_h8 = 0;
	size_t r_h8 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	l_h8 = binary_tree_height(tree->left) + 1;
	r_h8 = binary_tree_height(tree->right) + 1;
	if (l_h8 > r_h8)
		return (l_h8);
	else
		return (r_h8);
}
