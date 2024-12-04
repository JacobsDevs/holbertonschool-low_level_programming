#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - Retruns the length of a doubly linked list to the screen.
 * @h: Pointer to the head of the list
 *
 * Return: Length of the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 1;
	dlistint_t *current;

	if (h == NULL)
		return (0);
	current = h->next;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
