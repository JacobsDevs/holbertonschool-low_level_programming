#include "main.h"

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
