#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor of a binary tree.
* @tree: pointer to the root node of the tree.
* Return: int as the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
