#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the lowest common
 * ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *left, *right;

	if (first == NULL || second == NULL)
		return (NULL);

	left = (binary_tree_t *)first;
	while (left != NULL)
	{
		right = (binary_tree_t *)second;
		while (right)
		{
			if (right == left)
				return (left);
			right = right->parent;
		}
		left = left->parent;
	}

	return (NULL);
}
