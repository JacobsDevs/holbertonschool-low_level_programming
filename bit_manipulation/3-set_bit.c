#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the bit at index to 1.
 * @n: The number to adjust.
 * @index: The index to change to bit to 1.
 *
 * Return: The adjusted bit.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << (index);
	*n = *n | mask;
	return (1);
}
