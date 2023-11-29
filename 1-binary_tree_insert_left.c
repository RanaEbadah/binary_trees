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

	createdNode->parent = parent;
	createdNode->n = value;
	createdNode->right = NULL;
	createdNode->left = parent->left;

	if (parent->left != NULL)
		parent->left->parent = createdNode;

	parent->left = createdNode;

	return (createdNode);
}
