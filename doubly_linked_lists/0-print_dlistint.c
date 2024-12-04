#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - Returns the length of a doubly linked list to the screen.
 * @h: Pointer to the head of the list
 *
 * Return: Length of the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 1;
	dlistint_t *current;

	if (h == NULL)
		return (0);
	current = h->next;
	while (current->next != NULL)
	{
		current = current->next;
		i++;
	}
	i++;
	return (i);
}
