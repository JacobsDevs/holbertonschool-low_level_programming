#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts the first number in a string to an int respecting sign
 * @s: The string to convert
 *
 * Return: The converted int
 */

int _atoi(char *s)
{
	int i, num, posneg;

	i = 0;
	posneg = 0;

	while (s[i] < 48 || s[i] > 57)
	{
		if (s[i] == '+')
			posneg++;
		else if (s[i] == '-')
			posneg--;
		i++;
	}
	num = 0;
	while (s[i] > 47 && s[i] < 58)
	{
		num *= 10;
		num += (s[i] - 48);
		i++;
	}
	if (posneg < 0)
		return (num * -1);
	else
		return (num);
}
