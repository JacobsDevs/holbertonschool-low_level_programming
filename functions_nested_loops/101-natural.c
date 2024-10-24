#include <stdio.h>

int multiples_of(int n, int j, int k);

/**
 * main - prints a sum of all the multiples of 3 or 5 below 1024
 * Return: always 0
 */

int main(void)
{
	int n, j;

	n = j = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			j += n;
		n++;
	}
	printf("%d\n", j);
	return (0);
}
