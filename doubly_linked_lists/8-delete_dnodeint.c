#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at the index while keeping the
 * list intact.
 * @head: Pointer to the Pointer of the head of the list.
 * @index: The index to remove the node from starting at 0.
 *
 * Return: 1 for success or -1 for failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *trav = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)	{
		*head = trav->next;
		trav->prev = NULL;
		return (1);
	}
	while (trav != NULL && i < index)
	{
		trav = trav->next;
		i++;
	}
	if (i != index || trav == NULL)
		return (-1);
	trav->prev->next = trav->next;
	trav->next->prev = trav->prev;
	free(trav);
	return (1);
}
