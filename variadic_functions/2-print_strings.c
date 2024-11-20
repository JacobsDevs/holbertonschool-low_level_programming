#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints all the args as strings with the specified separator
 * @separator: The separator to use
 * @n: The number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *p;

	va_start(ap, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	while (i < n)
	{
		p = va_arg(ap, char *);
		if (p == NULL)
			p = "(nil)";
		if (i == n - 1)
			printf("%s\n", p);
		else if (separator == NULL)
			printf("%s", p);
		else
			printf("%s%s", p, separator);
		i++;
	}
	va_end(ap);
}
