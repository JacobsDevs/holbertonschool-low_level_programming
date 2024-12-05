#include "main.h"

/**
 * print_binary - Uses bitwise shifting and the & operator to print a decimal
 * number in binary in 64-bit.
 * @n: The decimal number to print.
 */
void print_binary(unsigned long int n)
{
	int padded = 1;
	int c = 63;

	while (c >= 0)
	{
		int result = n >> c;

		if (result & 1)
		{
			_putchar('1');
			padded = 0;
		}
		else if (padded == 0)
			_putchar('0');
		c--;
	}
	if (padded == 1)
		_putchar('0');
}
