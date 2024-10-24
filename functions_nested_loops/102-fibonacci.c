#include <stdio.h>

/**
 * main - print out the first 50 fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int i, j, k;

	i = 0;
	j = 1;
	k = 2;

	while (i < 50)
	{
		unsigned long int tmp;

		printf("%lu, ", j);
		tmp = k;
		k = j + k;
		j = tmp;
		i++;
	}
	putchar(10);
	return (0);
}
