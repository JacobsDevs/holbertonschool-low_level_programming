#include <stdio.h>

/**
 * main - print all single digit numbers in base 16 from 0 - f
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	n = 97;
	while (n < 103)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
