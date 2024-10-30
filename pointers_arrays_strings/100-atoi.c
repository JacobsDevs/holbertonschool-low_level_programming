#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi - converts the first number in a string to an int respecting sign
 * @s: The string to convert
 *
 * Return: The converted int
 */

int _atoi(char *s)
{
	int i, num, neg, pnsign;

	i = 0;
	neg = 0;
	pnsign = 1;
	while ((s[i] < 48 || s[i] > 57) && s[i] != '\0')
	{
		if (s[i] == '-')
			neg++;
		i++;
	}
	if (s[i] == '\0')
		return (0);
	if (neg % 2 == 1)
		pnsign = -1;
	num = 0;
	while (s[i] > 47 && s[i] < 58)
	{
		num *= 10;
		num += ((s[i] - 48) * pnsign);
		i++;
	}
	return (num);
}
