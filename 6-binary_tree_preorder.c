/*
 * File_name: 6-binary_tree_preorder.c
 * Task_no: 6
 * Task_Title: 6. Pre-order traversal
 *
 * Functions: void binary_tree_preorder.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree
 *                        using pre-order traversal.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: A pointer to the root node
 *        of the tree to traverse.
 * @func: A pointer to a function
 *        to call for each node.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
