#include "main.h"
/**
 * print_diagonal - print \ n times spaced correctly followed by a new line
 * @n: the number of _ to print.
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(32);
			j++;
		}
		_putchar(92);
		_putchar(10);
		i++;
	}
}
