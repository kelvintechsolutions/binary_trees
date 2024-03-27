#include "binary_trees.h"
/**
 * binary_tree_delete - it frees an entire tree using recursion it free the node
 * when the node left and right are NULL
 * @tree:it is  tree to free
 * Return: it returns Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
