#include <stdio.h>

void fizz_buzz(void);
/**
 * main - runs the fizz_buzz function
 *
 * Return: Always 0
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - print numbers from 1 - 100. If number is a multiple of 3
 * print Fizz instead, if it is a multiple of 5 print Buzz if it is a multiple
 * of both print FizzBuzz.
 */

void fizz_buzz(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
}
