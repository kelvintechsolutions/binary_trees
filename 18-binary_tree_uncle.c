#include "binary_trees.h"

/**
 * binary_tree_uncle - it is a function that finds if a node is sibling
 * @node:it is a node to check
 * Return:it is  The uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
