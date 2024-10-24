#include <unistd.h>
#include "main.h"

/**
 * _islower - checks if ascii value of c is between 'a' and 'z' and returns
 * @c: the character to be checked
 *
 * 1 for true or 0 for false.
 *
 * Return: 0 - No error
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
