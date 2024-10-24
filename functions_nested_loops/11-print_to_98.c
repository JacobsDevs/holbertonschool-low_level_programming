#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all the numbers between n and 98
 * @n: The number to start from
 *
 */

void print_to_98(int n)
{
	while (n > 98)
		printf("%d, ", n--);
	while (n < 98)
		printf("%d, ", n++);
	printf("%d\n", n);
}
