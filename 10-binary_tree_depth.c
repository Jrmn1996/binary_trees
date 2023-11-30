#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: pointer to the node to measure the depth
 * Return: depth of the node or 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t dep;

	if (node == NULL || node->parent == NULL)
		return (0);
	dep = measure_depth(node);
	return (dep);
}

/**
 * measure_depth - measures the depth of a node in a binary tree recursively
 * @node: pointer to the node to measure the depth
 * Return: depth of the node or 0 if node is NULL
 */
size_t measure_depth(const binary_tree_t *node)
{
	size_t dep;

	if (node == NULL || node->parent == NULL)
		return (0);
	dep = measure_depth(node->parent);
	return (dep + 1);
}
