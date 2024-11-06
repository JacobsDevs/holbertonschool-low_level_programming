#include <stdio.h>
/**
 * print_diagsums - Print the sum of 2 diagonals in a matrix
 * @a: Pointer to the start of the matrix
 * @size: Size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum = 0;
	int row = 0;

	while (i < size)
	{
		sum += a[(row * size) + i];
		row++;
		i++;
	}
	printf("%d, ", sum);
	sum = 0;
	while (i > 0)
	{
		sum += a[((row) * size) - (i)];
		row--;
		i--;
	}
	printf("%d\n", sum);
}
