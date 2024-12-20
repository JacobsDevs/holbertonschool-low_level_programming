#include <stdlib.h>

/**
 * _strdup - copies a string to a new space in memory
 * @str: Pointer to the original string
 *
 * Return: Pointer to the copy of the string or NULL if str is NULL or
 * insufficient memory available.
 */

char *_strdup(char *str)
{
	int i = 0;
	char *dup;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * i + sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
