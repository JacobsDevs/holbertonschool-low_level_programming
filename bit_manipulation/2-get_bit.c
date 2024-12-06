#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - Returns the bit located at the index.
 * @n: The decimal number to search.
 * @index: The index to get the bit from.
 *
 * Return: The bit located at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index & 1);
/*	char *num = malloc(sizeof(char) * 64);
	unsigned int i = 0;

	if (index > 63)
		return (-1);
	while (i < 64)
	{
		int result = n >> (63 - i);

		if (result & 1)
		{
			num[i] = '1';
		}
		else
		{
			num[i] = '0';
		}
		i++;
	}
	if (num[i - (index + 1)] == 49)
		return (1);
	else
		return (0);*/
}

