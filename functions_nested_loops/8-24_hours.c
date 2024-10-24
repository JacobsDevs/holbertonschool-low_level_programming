#include "main.h"

/**
 * jack_bauer - print every minute of the 24 hour day to the screen
 *
 * Return: 0 - no errors
 */

void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while ((i < 2 && j < 10) || (i < 3 && j < 4))
		{
			k = 0;
			while (k < 6)
			{
				l = 0;
				while (l < 10)
				{
					_putchar(i + 48);
					_putchar(j + 48);
					_putchar(58);
					_putchar(k + 48);
					_putchar(l + 48);
					_putchar(10);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
