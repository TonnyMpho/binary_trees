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

	if (first == second)
		return ((binary_tree_t *)first);

	left = binary_trees_ancestor(first, second->left);
	if (left != NULL && left != first && left != second)
		return (left);

	right = binary_trees_ancestor(first, second->right);
	if (right != NULL && right != first && right != second->right)
		return (right);

	if (left == second && right == first)
		return ((binary_tree_t *)first);

	if (left == first && right == second)
		return ((binary_tree_t *)second);

	if (left)
		return (left);
	if (right)
		return (right);

	return (NULL);
}
