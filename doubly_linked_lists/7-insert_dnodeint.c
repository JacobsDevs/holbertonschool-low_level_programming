#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at the specified position.
 * @h: Pointer to the pointer of the head of the list.
 * @idx: The index to insert the node at.
 * @n: The value to put in the n member of the node.
 *
 * Return: Pointer to the newly inserted node or NULL if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *trav = *h;
	dlistint_t *new;

	if (*h != NULL)
	{
		while (trav != NULL && i < idx)
		{
			trav = trav->next;
			i++;
		}
		if (i != idx)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		free_dlistint(*h);
	if (*h == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		new->n = n;
		new->prev = trav->prev;
		new->prev->next = new;
		new->next = trav;
		trav->prev = new;
	}
	return (new);
}
