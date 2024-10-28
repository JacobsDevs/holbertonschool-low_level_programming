#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9 followed by a new line
 * constrained by useing _putchar twice
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + 48);
	_putchar(10);
}
