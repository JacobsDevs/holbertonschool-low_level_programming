#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at the given index.
 * @head: Pointer to the head of the list.
 * @index: The index of the requested list.
 *
 * Return: Pointer to the requested node or NULL if unfound.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while(i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
