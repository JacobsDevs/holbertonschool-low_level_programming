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
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}

