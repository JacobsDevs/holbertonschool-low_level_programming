#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the start of the list.
 */
void free_dlistint(dlistint_t *head)
{
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	free_dlistint(head->next);
	free(head);
}
