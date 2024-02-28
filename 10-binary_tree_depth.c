/*
 * File_name: 10-binary_tree_depth.c
 * Task_no: 10
 * Task_Title: 10. Depth
 *
 * Functions: size_t binary_tree_depth.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node
 *                     in a binary tree.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL,
 *         your function must return 0,
 *         else return the depth.
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
