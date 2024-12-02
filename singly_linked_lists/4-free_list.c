#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
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
		if (node->str != NULL)
			free(node->str);
		free(node);
		return;
	}
	free_list(node->next);
	if (node->str != NULL)
		free(node->str);
	free(node);
}
