#include <stdio.h>

/**
 * main - prints all possible single digit numbers only using putchar
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
