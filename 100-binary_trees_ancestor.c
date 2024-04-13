#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *lolo, *chief;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	lolo = first->parent, chief = second->parent;
	if (first == chief || !lolo || (!lolo->parent && chief))
		return (binary_trees_ancestor(first, chief));
	else if (lolo == second || !chief || (!chief->parent && lolo))
		return (binary_trees_ancestor(lolo, second));
	return (binary_trees_ancestor(lolo, chief));
}
