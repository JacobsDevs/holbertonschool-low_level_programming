#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - Converts the given binary number to decimal.
 * @b: The number in binary.
 *
 * Return: The number in decimal or 0 if invalid.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	return (convert_binary(b, 0, i - 1));
}

/**
 * convert_binary - Recursively converts binary to decimal.
 * @s: The number in binary.
 * @count: The current iteration.
 * @len: The length of the provided string.
 *
 * Return: The number in decimal.
 */
unsigned int convert_binary(const char *s, unsigned int count, int len)
{
	unsigned int sum = 0;
	char curr = s[len];
	int current = atoi(&curr);
	int pow = power(2, count);
	int converted = current * pow;

	if (len == 0)
		return (converted);
	sum += convert_binary(s, count + 1, len - 1) + converted;
	return (sum);
}

/**
 * power - Returns base raised by exponent.
 * @base: The base number.
 * @exp: The exponent to raise base by.
 *
 * Return: The result or 1 if exp 0.
 */
int power(int base, int exp)
{
	int product = base;

	if (exp == 0)
		return (1);
	while (exp > 1)
	{
		product *= base;
		exp--;
	}
	return (product);
}
