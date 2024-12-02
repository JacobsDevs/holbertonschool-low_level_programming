#include "lists.h"
#include <stdlib.h>

/**
* list_len - Returns the length of the given linked list
* @h: the head of the linked list
*
* Return: The length of the given list.
*/

int list_len(const list_t *h)
{
	list_t *next = NULL;
	int i = 0;

	if (h != NULL)
	{
		next = h->next;
		i++;
	}
	while (next != NULL)
	{
		next = next->next;
		i++;
	}
	return (i);
}
