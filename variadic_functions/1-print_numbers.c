#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers seperated by separator followed by new line
 * @separator: The separator to use.
 * @n: The number of vargs
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	while (i < n - 1)
	{
		if (separator == NULL)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
		i++;
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
