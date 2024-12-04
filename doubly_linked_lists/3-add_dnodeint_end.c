#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - Adds a node to the end of a doubly linked list.
 * @head: Pointer to the current head of the list.
 * @n: value to be stored in the new node.
 *
 * Return: Pointer to the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *trav = *head;

	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
		node->prev = NULL;
	}
	else
	{
		while (trav->next != NULL)
			trav = trav->next;
		trav->next = node;
		node->next = NULL;
		node->prev = trav;
	}
	return (node);
}
