#include "main.h"
#include <stdio.h>
#include <stdint.h>

/**
 * clear_bit - clears the bit at index to 0.
 * @n: The number to adjust.
 * @index: The index to change to bit to 1.
 *
 * Return: 1 for success -1 for failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);
	*n = *n & ~((unsigned long int) mask << index);
	return (1);
}
