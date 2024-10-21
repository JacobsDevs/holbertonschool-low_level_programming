#include <stdio.h>

/**
 * main - print all combinations of 2 digits with the following constraints:
 * - two digits must be different
 * - only print the smallest combination of those two digits
 * - must be printed in ascending order
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i != j && i < j)
			{
				putchar(i + 48);
				putchar(j + 48);
				if (i != 8 || j != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
