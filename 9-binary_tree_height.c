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
	size_t height_r, height_l;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		height_l = binary_tree_height(tree->left);
		height_r = binary_tree_height(tree->right);

		if (height_l >= height_r)
			return (height_l + 1);
		else
			return (height_r + 1);
	}
}
