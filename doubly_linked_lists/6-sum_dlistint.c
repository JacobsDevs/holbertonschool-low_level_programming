#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the n values in the list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the nodes in the list.
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
