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

	va_start(ap, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	while (i < n - 1)
	{
		if (separator == NULL)
			printf("%s", va_arg(ap, char *));
		else
			printf("%s%s", va_arg(ap, char *), separator);
		i++;
	}
	printf("%s\n", va_arg(ap, char *));
	va_end(ap);
}
