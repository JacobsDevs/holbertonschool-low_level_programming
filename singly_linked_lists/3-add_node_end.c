#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - Adds a node to the end of the list
 * @head: pointer to a pointer to the head of the list
 * @str: the string to be copied to the node
 *
 * Return: Pointer to the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *trav = *head;
	unsigned int len = 0;

	if (temp == NULL)
	{
		clean_up_list(*head);
		return (NULL);
	}
	temp->next = NULL;
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		clean_up_list(temp);
		return (NULL);
	}
	while (temp->str[len] != '\0')
		len++;
	temp->len = len;
	if (trav == NULL)
	{
		*head = temp;
		return(temp);
	}
	while (trav == NULL || trav->next != NULL)
		trav = trav->next;
	trav->next = temp;
	return (temp);
}

/**
 * clean_up_list - recursively frees the linked list
 * @node: pointer to the start of the list
 */

void clean_up_list(list_t *node)
{
	if (node == NULL)
		return;
	if (!node->next)
	{
		free(node->str);
		free(node);
		return;
	}
	clean_up_list(node->next);
	free(node->str);
	free(node);
}
