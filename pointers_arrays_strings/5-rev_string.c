#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: The string to be reversed
 */

void rev_string(char *s)
{
	int i, j;
	char tmp;

	i = j = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i > j)
	{
		tmp = s[i];
		s[i--] = s[j];
		s[j++] = tmp;
	}
}
