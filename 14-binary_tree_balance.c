/*
 * File_name: 14-binary_tree_balance.c
 * Task_no: 14
 * Task_Title: 14. Balance factor
 *
 * Functions: int binary_tree_balance,
 *            size_t binary_tree_height.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor
 *                       of a binary tree.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: A pointer to the root node of the tree
 *        to measure the balance factor.
 *
 * Return: If tree is NULL,
 *         return 0,
 *         else return balance factor.
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}


/**
 * binary_tree_height - Measures the height
 *                      of a binary tree.
 *
 * @tree: A pointer to the root node of
 *        the tree to measure the height.
 *
 * Return: If tree is NULL,
 *         your function must return 0,
 * else return height.
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
