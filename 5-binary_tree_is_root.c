/*
 * File_name: 5-binary_tree_is_root.c
 * Task_no: 5
 * Task_Title: 5. Is root
 *
 * Functions: int binary_tree_is_root.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 *                       of a binary tree.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a root - 1.
 *         Otherwise - 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
