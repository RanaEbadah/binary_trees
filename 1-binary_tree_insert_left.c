#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
* Return: pointer to the created node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *createdNode;

	createdNode = malloc(sizeof(binary_tree_t));
	if ((createdNode == NULL) || (parent == NULL))
		return (NULL);

	createdNode->n = value;
	createdNode->parent = parent;
	createdNode->right = NULL;
	if (parent->left == NULL)
		createdNode->left = NULL;
	else
		createdNode->left = parent->left;

	return (createdNode);
}
