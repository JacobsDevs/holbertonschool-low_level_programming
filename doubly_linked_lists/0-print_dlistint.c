#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints the elements and returns the length of a doubly
 * linked list to the screen.
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
	printf("%d\n", h->n);
	current = h->next;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
