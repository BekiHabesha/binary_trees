/*
 * File_name: 111-bst_insert.c
 * Task_no: 25
 * Task_Title: 25. BST-Insert
 *
 * Functions: bst_t *bst_insert.
 * Created: On February 28, 2024
 * Author: Bereket Dereje Mekkonen
 *
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in
 *              a Binary Search Tree.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: A double pointer to the root
 *        node of the BST to insert the value.
 *
 * @value: The value to store in the
 *         node to be inserted.
 *
 * Return: A pointer to the created node,
 *         or NULL on failure.
 */


bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *curr, *new;

	if (tree != NULL)
	{
		curr = *tree;

		if (curr == NULL)
		{
			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < curr->n) /* insert in left subtree */
		{
			if (curr->left != NULL)
				return (bst_insert(&curr->left, value));

			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (curr->left = new);
		}
		if (value > curr->n) /* insert in right subtree */
		{
			if (curr->right != NULL)
				return (bst_insert(&curr->right, value));

			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (curr->right = new);
		}
	}
	return (NULL);
}
