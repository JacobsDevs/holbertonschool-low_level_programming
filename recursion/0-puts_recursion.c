#include "main.h"
/**
 * _puts_recursion - Recursively uses putchar to print a string to the terminal
 * @s: Pointer to the start of the string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
