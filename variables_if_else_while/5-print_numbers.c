#include <stdio.h>

/**
 * main - print all single digit numbers in base 10 from 0 - 10
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
