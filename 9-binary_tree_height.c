#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left && tree->right)
		return (2);

	if (tree->left || tree->right)
		return (1);

	return (0);
}
