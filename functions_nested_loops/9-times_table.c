#include "main.h"

/**
 * times_table - prints the times tables of 0 - 9 to the screen
 *
 * Return: 0 - no errors
 */

void times_table(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = i * j;
			if (k > 9)
			{
				int first = k / 10;
				int last = k % 10;

				_putchar(first + 48);
				_putchar(last + 48);
			}
			else
			{
				_putchar(32);
				_putchar(k + 48);
			}
			if (j != 9)
			{
				_putchar(44);
				_putchar(32);
			}
			j++;
		}
		_putchar(10);
		i++;
	}
}
