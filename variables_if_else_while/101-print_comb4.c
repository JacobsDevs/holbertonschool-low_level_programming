#include <stdio.h>

/**
 * main - print all combinations of 3 digits with the following constraints
 * - all numbers separated by , followed by a space
 * - the 3 digits must be different
 * - print the smallest combination of digits
 * - must be in ascending order
 * - only use putchar 6 times
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != j && j != k)
				{
					if (i < j && j < k)
					{
						putchar(i + 48);
						putchar(j + 48);
						putchar(k + 48);
						if (i !=  7 || j != 8 || k != 9)
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
