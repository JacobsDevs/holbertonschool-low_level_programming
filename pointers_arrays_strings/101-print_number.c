#include "main.h"
/**
 * recursive_putchar - recursively putchar input with last number first
 * @n: The int to work through
 *
 * Return: 0 to escape recursion
 */

/**int recursive_putchar(int n)
{
	if (n == 0)
		return (0);
	_putchar(n % 10 + 48);
	return (recursive_putchar(n / 10));
}
 */

/**
 * print_number - print an int without pointers or arrays only using _putchar
 * @n: The int to print
 */

void print_number(int n)
{
	int i = n;
	int j;

	if (i < 0)
	{
		_putchar(45);
		i = i * -1;
	}
	while (i > 10)
	{
		j = i;
		while (j > 10)
		{
			j /= 10;
		}
		_putchar(j + 48);
		i /= 10;
	}
}
