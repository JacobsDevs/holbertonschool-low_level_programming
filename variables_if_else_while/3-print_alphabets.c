#include <stdio.h>

/**
 * main - uses a while loop to print the alphabet in lowercase then uppercase
 * with ascii.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	n = 65;

	while (n < 91)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
