#include <unistd.h>
#include "main.h"

/**
 * main - Uses print_alphabet to display "_putchar" to the terminal followed by
 * newline without the use of any stdlibs
 *
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

