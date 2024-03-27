#include "binary_trees.h"
/**
 * binary_tree_nodes - it is a function that returns # of node
 * s in a tree with children
 * @tree:it is a tree to check
 * Return:it is a number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left || tree->right) ? 1 : 0);
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		return (node);
	}
}
