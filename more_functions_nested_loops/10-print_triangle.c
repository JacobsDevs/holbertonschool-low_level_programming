#include "main.h"
/**
 * print_triangle - print a triangle of #s followed by a new line
 * @n: the height of the # triangle to print.
 */

void print_triangle(int n)
{
	int i, j;

	i = 0;
	while (i++ < n)
	{
		j = 0;
		while (j < n - i)
		{
			_putchar(32);
			j++;
		}
		j = 0;
		while (j < i)
		{
			_putchar(35);
			j++;
		}
		_putchar(10);
	}
	if (n < 1)
		_putchar(10);
}
