#include <stdio.h>

/**
 * main - uses a while loop to print the alphabet without q & e with ascii
 *
 * Return: 0
 */

int main(void)
{
	int n;

	n = 97;

	while (n < 123)
	{
		if (n != 101 && n != 113)
			putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
