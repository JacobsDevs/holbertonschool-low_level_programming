#include "lists.h"
#include <stdio.h>

/**
* print_list - prints each item in the linked list and returns the list length
* @head: the head of the linked list to print
*
* Return: The length of the list
*/

int print_list(list_t *head)
{
	int i = 0;
	list_t *current = head;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		i++;
	}
	return (i);
}
