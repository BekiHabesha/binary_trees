/*
 * File_name: 100-short_binary_trees_ancestor.c
 * Task_no: 19
 * Task_Title: 19. Lowest common ancestor
 *
 * Functions: binary_tree_t *binary_trees_ancestor.
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
	binary_tree_t *mom, *pop;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mom = first->parent, pop = second->parent;
	if (first == pop || !mom || (!mom->parent && pop))
		return (binary_trees_ancestor(first, pop));
	else if (mom == second || !pop || (!pop->parent && mom))
		return (binary_trees_ancestor(mom, second));
	return (binary_trees_ancestor(mom, pop));
}
