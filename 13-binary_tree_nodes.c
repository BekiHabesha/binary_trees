/*
 * File_name: 13-binary_tree_nodes.c
 * Task_no: 13
 * Task_Title: 13. Nodes
 *
 * Functions: void binary_tree_delete.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 *                     in a binary tree.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: A pointer to the root node of the tree
 *        to count the number of nodes.
 *
 * Return: If tree is NULL,
 *         the function must return 0,
 *         else return node count.
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
