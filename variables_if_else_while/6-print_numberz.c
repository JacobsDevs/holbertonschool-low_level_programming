#include <stdio.h>

/**
 * main - print all single digit numbers in base 10 from 0 - 10 using putchar
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
	putchar(10);
	return (0);
}
