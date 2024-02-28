/*
 * File_name: 11-binary_tree_size.c
 * Task_no: 11
 * Task_Title: 11. Size
 *
 * Functions: size_t binary_tree_size.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: A pointer to the root node of
 *        the tree to measure the size of.
 *
 * Return: The size of the tree.
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
