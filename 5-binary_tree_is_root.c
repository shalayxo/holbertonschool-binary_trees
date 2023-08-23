#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if given node is a root
 * @node: pointer to node to check
 * Return: 1 on success, 0 otherwise
*/

int binary_tree_is_root(const binary_tree_t *node)
{
if (node && !node->parent)
	return (1);
return (0);
}
