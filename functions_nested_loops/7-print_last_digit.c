#include "main.h"

/**
 * print_last_digit - returns the value of the last digit of n
 * @n: the number we want the last digit of
 *
 * Return: Te absolute of the last digit of n
 */

int print_last_digit(int n)
{
	int i;

	i = _abs(n % 10);
	_putchar(i + 48);
	return (i);
}
/**
 * _abs - returns the absolute number of the provided int
 * @n: the number to return as an absolute
 *
 * Return: The absolute of n
 */

int _abs(int n)
{
	if (n < 0)
		return (n + (n * -2));
	else
		return (n);
}
