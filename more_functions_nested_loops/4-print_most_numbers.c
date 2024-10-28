#include "main.h"

/**
 * print_most_numbers - prints numbers 0 - 9 followed by a new line
 * constrained by using _putchar twice & not printing 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + 48);
	}
	_putchar(10);
}
