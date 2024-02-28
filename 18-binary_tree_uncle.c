/*
 * File_name: 18-binary_tree_uncle.c
 * Task_no: 18
 * Task_Title: 18. Uncle
 *
 * Functions: binary_tree_t *binary_tree_uncle.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 *                     in a binary tree.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @node: A pointer to the node
 *        to find the uncle of.
 *
 * Return: If node is NULL or
 *         has no uncle, NULL.
 *         Otherwise,
 *         a pointer to the uncle node.
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
