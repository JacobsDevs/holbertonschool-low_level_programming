#include <unistd.h>
#include "main.h"

/**
 * _isalpha - checks if ascii value of c is alphabetical and returns
 * 1 for true or 0 for false.
 * @c: the character to be checked
 *
 * Return: 0 - No error
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	return (0);
}
