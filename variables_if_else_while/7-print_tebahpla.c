#include <stdio.h>

/**
 * main - uses a while loop to print the alphabet backwards with ascii
 *
 * Return: 0
 */

int main(void)
{
	int n;

	n = 122;

	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar(10);
	return (0);
}
