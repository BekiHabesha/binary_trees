/*
 * File_name: 100-long_binary_trees_ancestor.c
 * Task_no: 19
 * Task_Title: 19. Lowest common ancestor
 *
 * Functions: binary_tree_t *binary_trees_ancestor,
 *            size_t depth(const binary_tree_t *tree);.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common
 *                         ancestor of two nodes.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @first: Pointer to the first node.
 *
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL,
 *         else return common ancestor.
 */


binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t first_depth, second_depth;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);
	if (first == second->parent)
		return ((binary_tree_t *)first);
	if (first->parent == second)
		return ((binary_tree_t *)second);

	for (first_depth = depth(first); first_depth > 1; first_depth--)
		first = first->parent;
	for (second_depth = depth(second); second_depth > 1; second_depth--)
		second = second->parent;

	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);
	if (first == second->parent)
		return ((binary_tree_t *)first);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	else
		return (NULL);
}


/**
 * depth - Measures the depth of
 *         a node in a binary tree.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: A pointer to the node
 *        to measure the depth.
 *
 * Return: If tree is NULL,
 *         your function must return 0,
 *         else return the depth.
 */

size_t depth(const binary_tree_t *tree)
{
	return ((tree->parent != NULL) ? 1 + depth(tree->parent) : 0);
}
