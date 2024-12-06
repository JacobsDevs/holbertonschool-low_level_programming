#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped to get from
 * number n to number m.
 * @n: The origin number.
 * @m: The desired number.
 *
 * Return: The amount of bits that need to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int i = 0;
	int count = 0;

	while (i < 64)
	{
		if ((flipped >> i & (unsigned long int) 1) == 1)
			count++;
		i++;
	}
	return (count);
}
