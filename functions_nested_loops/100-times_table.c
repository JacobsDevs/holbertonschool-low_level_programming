#include "main.h"

void print_1_digit(int, int);
void print_2_digits(int, int);
void print_3_digits(int, int);

/**
 * print_times_table - prints the times tables of 0 - n to the screen.
 * Will not accept n > 15 or n < 0
 * @n: The times table to print.
 * Return: 0 - no errors.
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;
	i = 0;
	while (i < n + 1)
	{
		j = 0;
		while (j < n + 1)
		{
			k = i * j;
			if (k > 9 && k < 100)
				print_2_digits(k, j);
			else if (k >= 100)
				print_3_digits(k, j);
			else
				print_1_digit(k, j);
			j++;
		}
		_putchar(10);
		i++;
	}
}

/**
 * print_1_digit - prints 1 digit to the screen with the approporiate number
 * of spaces and a comma.
 * @k: The number to display.
 * @j: Iterator of print_times_table
 */
void print_1_digit(int k, int j)
{
	if (j != 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(32);
	}
	_putchar(k + 48);
}

/**
 * print_2_digits - prints 2 digits to the screen with the approporiate number
 * of spaces and a comma.
 * @k: The number to display.
 * @j: Iterator of print_times_table
 */
void print_2_digits(int k, int j)
{
	int first = k / 10;
	int last = k % 10;

	if (j != 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
	}
	_putchar(first + 48);
	_putchar(last + 48);
}
/**
 * print_3_digits - prints 3 digits to the screen with the approporiate number
 * of spaces and a comma.
 * @k: The number to display.
 * @j: Iterator of print_times_table
 */
void print_3_digits(int k, int j)
{
	int first = (k / 10) / 10;
	int middle = (k / 10) % 10;
	int last = k % 10;

	if (j != 0)
	{
		_putchar(44);
		_putchar(32);
	}
	_putchar(first + 48);
	_putchar(middle + 48);
	_putchar(last + 48);
}
