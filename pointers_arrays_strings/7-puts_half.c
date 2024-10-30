#include "main.h"

/**
 * puts_half - Prints the 2nd half of a string to the screen followed by
 * a new line
 * @str: The string to be printed
 */

void puts_half(char *str)
{
	int n, i = 1;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		n = ((i - 1) / 2);
	else
		n = i / 2;
	n++;
	while (str[n] != '\0')
		_putchar(str[n++]);
	_putchar(10);
}
