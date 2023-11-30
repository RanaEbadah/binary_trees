#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: pointer to the root node of the tree.
* Return: size_t as the nodes count.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodesCounter = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			nodesCounter += 1;

		nodesCounter += binary_tree_nodes(tree->left);
		nodesCounter += binary_tree_nodes(tree->right);
	}
	return (nodesCounter);
}
