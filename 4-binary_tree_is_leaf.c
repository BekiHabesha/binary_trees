/*
 * File_name: 4-binary_tree_is_leaf.c
 * Task_no: 4
 * Task_Title: 4. Is leaf
 *
 * Functions: int binary_tree_is_leaf.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *                       of a binary tree.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
