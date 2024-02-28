/*
 * File_name: 124-sorted_array_to_avl.c
 * Task_no: 34
 * Task_Title: 34. AVL-From sorted array
 *
 * Functions: avl_t *sorted_array_to_avl,
 *            void create_tree.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"


/**
 * create_tree - creates an AVL tree with recursion
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @node: pointer node
 *
 * @array: input array of integers
 *
 * @size: size of array
 *
 * @mode: 1 to adding on the left,
 *        2 to adding on the right
 *
 * Return: no return
 */


void create_tree(avl_t **node, int *array, size_t size, int mode)
{
	size_t middle;

	if (size == 0)
		return;

	middle = (size / 2);
	middle = (size % 2 == 0) ? middle - 1 : middle;

	if (mode == 1)
	{
		(*node)->left = binary_tree_node(*node, array[middle]);
		create_tree(&((*node)->left), array, middle, 1);
		create_tree(&((*node)->left), array + middle + 1, (size - 1 - middle), 2);
	}
	else
	{
		(*node)->right = binary_tree_node(*node, array[middle]);
		create_tree(&((*node)->right), array, middle, 1);
		create_tree(&((*node)->right), array + middle + 1, (size - 1 - middle), 2);
	}
}



/**
 * sorted_array_to_avl - creates root node and
 *                       calls to create_tree
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @array: input array of integers
 *
 * @size: size of array
 *
 * Return: pointer to the root
 */


avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *root;
	size_t middle;

	root = NULL;

	if (size == 0)
		return (NULL);

	middle = (size / 2);

	middle = (size % 2 == 0) ? middle - 1 : middle;

	root = binary_tree_node(root, array[middle]);

	create_tree(&root, array, middle, 1);
	create_tree(&root, array + middle + 1, (size - 1 - middle), 2);

	return (root);
}
