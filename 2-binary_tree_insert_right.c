#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: pointer to the node to insert the right-child in
* @value: value to store in the new node
* Return: pointer to the created node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *createdNode;

	createdNode = malloc(sizeof(binary_tree_t));
	if ((createdNode == NULL) || (parent == NULL))
		return (NULL);

	createdNode->n = value;
	createdNode->left = NULL;
	createdNode->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = createdNode;

	createdNode->parent = parent;
	parent->right = createdNode;

	return (createdNode);

}
