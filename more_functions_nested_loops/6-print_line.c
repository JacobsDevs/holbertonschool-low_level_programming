#include "main.h"
/**
 * print_line - print _ n times followed by a new line
 * @n: the number of _ to print.
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar(10);
}
