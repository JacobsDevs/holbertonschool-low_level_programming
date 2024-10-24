#include <stdio.h>

/**
 * main - print out all even fibonacci numbers below 4,000,000
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int i, j, k, l;

	i = l = 0;
	j = 1;
	k = 2;

	while (k < 4000000)
	{
		unsigned long int tmp;

		if (k % 2 == 0)
			l += k;
		tmp = k;
		k = j + k;
		j = tmp;
		i++;
	}
	printf("%lu\n", l);
	return (0);
}
