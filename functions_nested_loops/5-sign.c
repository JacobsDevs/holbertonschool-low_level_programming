#include <unistd.h>
#include "main.h"

/**
 * print_sign - checks if an int is positive, negative or 0
 * @n: the int to be checked
 *
 * Return:	0 - Number is 0
 *		+ - Number is greater than 0
 *		- - Number is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
