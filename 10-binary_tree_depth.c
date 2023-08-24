#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: pointer to the node to measure
 * Return: depth or 0 if NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

if (tree == NULL)
	return (0);

while (tree->parent)
{
depth++;
tree = tree->parent;
}
return (depth);
}
