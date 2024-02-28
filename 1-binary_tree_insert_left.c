/*
 * File_name: 1-binary_tree_insert_left.c
 * Task_no: 1
 * Task_Title: 1. Insert left
 *
 * Functions: binary_tree_t *binary_tree_insert_left
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child
 *                           of another in a binary tree.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @parent: A pointer to the node
 *          to insert the left-child in.
 *
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or
 *         an error occurs - NULL.
 *         Otherwise - 
 *              a pointer to the new node.
 *
 * Description: If parent already has a left-child,
 *              the new node takes its place, and 
 *              the old left-child is set as the
 *              left-child of the new node.
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
