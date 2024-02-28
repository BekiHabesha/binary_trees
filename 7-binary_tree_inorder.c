/*
 * File_name: 7-binary_tree_inorder.c
 * Task_no: 7
 * Task_Title: 7. In-order traversal
 *
 * Functions: void binary_tree_inorder.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree
 *                       using in-order traversal.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: A pointer to the root node
 *        of the tree to traverse.
 *
 * @func: A pointer to a function
 *        to call for each node.
 */


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
