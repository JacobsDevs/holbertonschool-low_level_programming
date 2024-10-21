#include <stdio.h>

/**
 * main - print all single digit numbers in base 16 from 0 - f
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 0x0;
	while (n <= 0xf)
	{
		printf("%x", n);
		n++;
	}
	printf("\n");
	return (0);
}
