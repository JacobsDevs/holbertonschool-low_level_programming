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

	temp->str = strdup(str);
	while (temp->str[len] != '\0')
		len++;
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (*head);
}
