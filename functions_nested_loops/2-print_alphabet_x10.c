#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Uses _putchar and a while loop to print the alphabet
 * 10 times from ascii values.
 *
 * Return: 0 - No error
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	j = 0;
	while (j < 10)
	{
		i = 97;
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}

