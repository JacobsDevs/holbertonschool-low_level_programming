#include <stdio.h>
#include <stdbool.h>

int multiples_of(int n, int j, int k);

/**
 * main - prints a sum of all the multiples of 3 or 5 below 1024
 * Return: always 0
 */

int main(void)
{
	int n;
	bool betty_needs_loops;

	betty_needs_loops = false;	
	while (betty_needs_loops)
		printf("I thought recursion would be better");

	n = multiples_of(0, 1024, 3) + multiples_of(0, 1024, 5);
	printf("%d\n", n);
	return (0);
}

/**
 * multiples_of_3 - recursively finds all the multiples of k less than j
 * and returns the sum
 * a multiple of 5 as multiples_of_5 will do that for us.
 * @n: the recursive counter.
 * @j: the maximum exclusive number
 * @k: the multiplier
 *
 * Return: The sum of all multiples of k less than j.
 */

int multiples_of(int n, int j, int k)
{
	int res;

	if (n >= j)
		return 0;
	res = n + multiples_of((n + k), j, k);
	return res;	
}
