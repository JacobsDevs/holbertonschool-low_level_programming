#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - Adds a node to the beginning of a doubly linked list.
 * @head: Pointer to the current head of the list.
 * @n: value to be stored in the new node.
 *
 * Return: Pointer to the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

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
		node->next = *head;
		*head = node;
		node->next->prev = node;
		node->prev = NULL;
	}
	return (node);
}
