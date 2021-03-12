#include "binary_trees.h"

/**
 * binary_tree_sibling - Entry point
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: If node is NULL or parent is NULL return NULL, else return sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}