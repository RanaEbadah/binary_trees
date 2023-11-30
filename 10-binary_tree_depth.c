#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_depth -  measures the depth of a binary tree node.
* @tree: a pointer to the root node of the tree to measure the height.
* Return: size_t as the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
