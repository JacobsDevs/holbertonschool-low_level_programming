#include "lists.h"
#include <stdlib.h>
/**
 * free_list - recursively frees the linked list
 * @node: pointer to the start of the list
 */

void free_list(list_t *node)
{
	if (node == NULL)
		return;
	if (!node->next)
	{
		free(node->str);
		free(node);
		return;
	}
	clean_up_list(node->next);
	free(node->str);
	free(node);
}
