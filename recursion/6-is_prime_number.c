#include <stdio.h>
/**
 * prime_search - Works through n / 2 - 1 and searches for divisables
 * @n: Original number
 * @i: Current iteration
 *
 * Return: 1 for prime 0 for non prime
 */

int prime_search(int n, int i)
{
	int primer = 0;

	if (i == 0)
		return (0);
	else if (n % i == 0)
		primer = 1;
	return (primer + prime_search(n, i - 1));
}

/**
 * is_prime_number - Checks to see if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 for prime number 0 for not prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (prime_search(n, (n / 2 + 1)) == 1)
		return (1);
	else
		return (0);
}
