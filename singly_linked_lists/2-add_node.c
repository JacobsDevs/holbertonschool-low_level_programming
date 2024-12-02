#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - Adds a node to the start of the linked list
 * @head: Pointer to the address of the head of the list
 * @str: String to be copied into the new node
 *
 * Return: Pointer to the newly added node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (temp == NULL)
	{
		clean_up_list(*head);
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		clean_up_list(*head);
		return (NULL);
	}
	while (temp->str[len] != '\0')
		len++;
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (*head);
}

/**
 * clean_up_list - recursively frees the linked list
 * @node: pointer to the start of the list
 */

void clean_up_list(list_t *node)
{
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
