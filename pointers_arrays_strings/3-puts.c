#include "main.h"
/**
 * _puts - prints str to stdout
 * @str: The string to print
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar(10);
}
