#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - return a random number, the last digit and if greater or less than 5
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o =  n % 10;

	if (o > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, o);
	if (o < 6 && o != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, o);
	if (o == 0)
		printf("Last digit of %d is %d and is 0\n", n, o);
	return (0);
}
