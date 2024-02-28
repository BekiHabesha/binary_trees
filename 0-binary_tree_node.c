/*
 * File_name: 0-binary_tree_node.c
 * Task_no: 0
 * Task_Title: New node
 *
 * Functions: binary_tree_t *binary_tree_node
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekonnen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @parent: A pointer to the parent of
 *           the node to create.
 *
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise -
 *                a pointer to the new node.
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
