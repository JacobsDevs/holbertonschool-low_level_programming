#include <stdlib.h>
/**
 * _strdup - Returning a pointer to a newly allocated space in memory
 * which contains the copy of a string.
 * @str: The pointer to the string we want to duplicate.
 *
 * Return: A pointer to an array of chars. Or NULL if failed.
 */

char *_strdup(char *str)
{
	char *result;
	int i = 0;

	while (str[i] != '\0')
		i++;
	result = malloc(sizeof(char) * i);
	if (result == NULL || str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
