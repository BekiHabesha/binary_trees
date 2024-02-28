/*
 * File_name: 112-array_to_bst.c
 * Task_no: 26
 * Task_Title: 26. BST-Array to BST
 *
 * Functions: bst_t *array_to_bst.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * array_to_bst - Builds a binary search tree
 *                from an array.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @array: A pointer to the first element of
 *         the array to be converted.
 *
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of
 *         the created BST,
 *         or NULL upon failure.
 */


bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
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
			if (bst_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
