/*
 * File_name: 134-heap_to_sorted_array.c
 * Task_no: 40
 * Task_Title: 40. Heap-Sort
 *
 * Functions: int *heap_to_sorted_array,
 *            size_t tree_size.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"


/**
 * tree_size - measures the sum of heights
 *             of a binary tree
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: pointer to the root node of
 *        the tree to measure the height
 *
 * Return: Height or 0 if tree is NULL
 */


size_t tree_size(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_l = 1 + tree_size(tree->left);

	if (tree->right)
		height_r = 1 + tree_size(tree->right);

	return (height_l + height_r);
}


/**
 * heap_to_sorted_array - converts a Binary Max Heap
 *                        to a sorted array of integers
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @heap: pointer to the root node
 *        of the heap to convert
 *
 * @size: address to store
 *        the size of the array
 *
 * Return: pointer to array sorted in descending order
 **/


int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int i, *a = NULL;

	if (!heap || !size)
		return (NULL);

	*size = tree_size(heap) + 1;

	a = malloc(sizeof(int) * (*size));

	if (!a)
		return (NULL);

	for (i = 0; heap; i++)
		a[i] = heap_extract(&heap);

	return (a);
}
