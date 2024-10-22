#include <stdio.h>

/**
 * main - print all combinations of 2 pairs of  2 digits with the following
 * constraints:
 * - two digits must be different
 * - only print the smallest combination of those two digits
 * - must be in format 00 00, 00 01 ...
 * - must be printed in ascending order
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i <= k &&  j <= l && (i != k || j != l))
					{
						putchar(i + 48);
						putchar(j + 48);
						putchar(32);
						putchar(k + 48);
						putchar(l + 48);
					if ((i < 9 || j < 8) || (k < 9 || l < 9))
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
