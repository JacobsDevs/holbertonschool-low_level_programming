#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14 followed by a new line
 * constrained by using _putchar twice
 */

void more_numbers(void)
{
	int i;

	for (i = 0x0; i < 0xf; i++)
	{
		if (i > 0x9)
			_putchar(49);
		_putchar((i % 10) + 48);
	}
	_putchar(10);
}
