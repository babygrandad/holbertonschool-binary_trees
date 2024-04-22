/**
 * binary_tree_uncle - get uncle of a node.
 *
 * @node: pointer node to get uncle.
 *
 * Return: pointer to uncle node, NULL otherwise.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
