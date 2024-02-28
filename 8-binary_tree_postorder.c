/*
 * File_name: 8-binary_tree_postorder.c
 * Task_no: 8
 * Task_Title: 8. Post-order traversal
 *
 * Functions: void binary_tree_postorder.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree
 *                         using post-order traversal.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: A pointer to the root node
 *        of the tree to traverse.
 *
 * @func: A pointer to a function
 *        to call for each node.
 */


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
