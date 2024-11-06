#include "main.h"
/**
 * _print_rev_recursion - Recursively uses putchar to print a string to the
 * terminal
 * @s: Pointer to the start of the string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
