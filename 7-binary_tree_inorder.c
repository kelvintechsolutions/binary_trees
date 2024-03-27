#include "binary_trees.h"
/**
 * binary_tree_inorder -it  prints elements of tree using in-order traversal
 * @tree:it is a tree to go through
 * @func:it is a function to use
 * Return:t returns Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
