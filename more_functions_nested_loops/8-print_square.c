#include "main.h"
/**
 * print_square - print #  n x n times followed by a new line
 * @n: the number of #s to print.
 */

void print_square(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			_putchar(35);
			j++;
		}
		_putchar(10);
		i++;
	}
	_putchar(10);
}
