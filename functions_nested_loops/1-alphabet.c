#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Uses _putchar and a while loop to print the alphabet
 * from ascii values.
 * Return: 0 - No error
 */

void print_alphabet(void)
{
	int i;
	
	i = 97;
	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

