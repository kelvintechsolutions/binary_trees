#include "binary_trees.h"
/**
 * binary_tree_preorder -it prints elements of tree using pre-order traversal
 * @tree:it is a tree to go through
 * @func:it functions to use
 * Return:t returns Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
