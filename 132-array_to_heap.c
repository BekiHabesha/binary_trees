/*
 * File_name: 132-array_to_heap.c
 * Task_no: 38
 * Task_Title: 38. Heap - Array to Binary Heap
 *
 * Functions: heap_t *array_to_heap.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"


/**
 * array_to_heap - builds a Max Binary Heap tree
 *                 from an array
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @array: a pointer to the first element
 *         of the array to be converted
 *
 * @size: the number of element in the array
 *
 * Return: a pointer to the root node of
 *         the created Binary Heap
 *         NULL on failure
 */


heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
