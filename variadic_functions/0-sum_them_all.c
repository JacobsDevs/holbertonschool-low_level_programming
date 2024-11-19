#include <stdarg.h>
/**
 * sum_them_all - returns a sum of all arguments
 * @n: The number of arguments that are passed
 *
 * Return: The sum of all the arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	return (sum);
}
