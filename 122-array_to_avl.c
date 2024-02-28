/*
 * File_name: 122-array_to_avl.c
 * Task_no: 32
 * Task_Title: 32. AVL-Array to AVL
 *
 * Functions: avl_t *array_to_avl.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"


/**
 * array_to_avl - Builds an AVL tree from an array.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @array: A pointer to the first element of
 *         the array to be converted.
 *
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created AVL,
 *         or NULL upon failure.
 */


avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t i, j;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (j == i)
		{
			if (avl_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
