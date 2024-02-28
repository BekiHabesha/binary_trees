/*
 * File_name: 15-binary_tree_is_full.c
 * Task_no: 15
 * Task_Title: 15. Is full
 *
 * Functions: int is_full_recursive,
 *            int binary_tree_is_full.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree
 *                     is full recursively.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: A pointer to the root node
 *        of the tree to check.
 *
 * Return: If tree is not full, 0.
 *         Otherwise, 1.
 */


int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}


/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
