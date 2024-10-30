#include "main.h"

/**
 * _strcpy - copies string, including the \0 terminator from src to dest
 * @dest: Destination of string
 * @src: Source of string
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
