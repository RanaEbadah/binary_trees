#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: pointer to the root node of the tree.
* Return: size_t as the leaves count.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leavesCounter = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			leavesCounter += 1;

		leavesCounter += binary_tree_leaves(tree->left);
		leavesCounter += binary_tree_leaves(tree->right);
	}
	return (leavesCounter);
}
