/*
 * File_name: 17-binary_tree_sibling.c
 * Task_no: 17
 * Task_Title: 17. Sibling
 *
 * Functions: binary_tree_t *binary_tree_sibling.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a
 *                       node in a binary tree.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @node: A pointer to the node
 *        to find the sibling of.
 *
 * Return: If node is NULL or
 *         there is no sibling - NULL.
 *         Otherwise -
 *             a pointer to the sibling.
 */


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
