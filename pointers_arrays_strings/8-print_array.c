#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array a
 * @a: The array to be printed
 * @n: The number of elements to print
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (i >= n)
	{
		printf("\n");
		return;
	}
	while (i < n - 1)
		printf("%d, ", a[i++]);
	printf("%d\n", a[n - 1]);
}
